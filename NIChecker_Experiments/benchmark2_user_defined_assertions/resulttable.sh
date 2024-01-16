#!/bin/bash
set -u
#BENCHMARK_DIR_PPREFIX=~/zyworkspace/nichecker/Experiment/remarks2.1
# Import the generic commands to run tests and stuff
source ./realworld18dirs.sh

###### count icbmc total time

for name in ${TEST_DIRS}
do
	cd ${name}
	
	#find icbmc output file *.out (except for output.log)
	files=`find ./ -type f  -name '*.out'`
	rm -f /tmp/totaltime_multi.out
	
	for i in $files 
	do 
  		cat $i | grep "real" | tr "m" " " | tr "s" " " >> /tmp/totaltime_multi.out
  		
	done
	#sum for total time 
	cat /tmp/totaltime_multi.out | awk '{sum+=(($2*60)+$3)} END {print sum}' > totaltime.txt
	
	cd ..
done  	

TMPPATH=/tmp/table_box.out
# output="$(date +%y-%m-%d_%H-%M).md"
echo "### $(date)" > $TMPPATH
echo "\\specialrule{0.03em}{2pt}{2pt}" >> $TMPPATH
echo "\\multirow{2}{*}{\\textbf{Name}} & \\multirow{2}{*}{\\textbf{LOC}} &\\multirow{2}{*}{\\textbf{ISR}} &\\multirow{2}{*}{\\textbf{Assertions}}  &\\multirow{2}{*}{\\#\\textbf{VA}} &\\multicolumn{3}{c|}{\\textbf{iCBMC}} &\\multicolumn{6}{|c|}{\\textbf{NIChecker}}\\\\" >> $TMPPATH
echo "\\cmidrule{l}{5-14}" >> $TMPPATH
echo " &  & & & &\\#\\textbf{Vio} &\\#\\textbf{TP} &\\textbf{Time}(s) &\\textbf{u} &\\textbf{r} &\\#\\textbf{WN} &\\#\\textbf{TP} &\\textbf{BackendTime}(s) &\\textbf{Time}(s)\\\\" >> $TMPPATH
echo "\\midrule" >> $TMPPATH

for name in ${TEST_DIRS}
do
    cd $name
    # name of directory
    echo "$name" > /tmp/name.out
    wc -l < main_n.c > /tmp/line.out
    # ISR number
    wc -l < priority.info > /tmp/isr_number.out
    
    cd _mt_main_n_result
    #obtain unsafe information
    unsafeinfo=$(grep "\(UNSAFE\)" output.log)
    unsafeinfoline=$(grep -c "\(UNSAFE\)" output.log)
    #echo $unsafeinfoline
    if [ $unsafeinfoline == 0 ];then
        echo "0" > /tmp/counterexample.out
    else # counterexample sum
        #split line
        echo $unsafeinfo | sed 's/MB /MB, /g' | tr "," "\n" > /tmp/unsafeinfo.out
        cat /tmp/unsafeinfo.out |grep "counterexample: "| sed 's/:/\&/g' | tr '\n' '@' | sed 's/@/ \\\\\n/g' > /tmp/counterexp.out
        cat /tmp/counterexp.out | awk '{sum+=$2} END {print sum}' > /tmp/counterexample.out
    fi
    # memory sum
    safeinfo=$(grep "\(SAFE\)" output.log)
    echo $safeinfo | sed 's/MB /MB, /g' | tr "," "\n" > /tmp/safeinfo.out
    #cat /tmp/safeinfo.out |grep "memory: "| sed 's/MB//g' | sed 's/:/\&/g' | tr '\n' '@' | sed 's/@/ \\\\\n/g' > /tmp/memory.out
    #cat /tmp/memory.out | awk '{sum+=$2} END {print sum}' > /tmp/summemory.out

    cbmctime=$(grep 'cbmcTimeSum: ' output.log)
    echo $cbmctime | sed 's/cbmcTimeSum: //' | sed 's/^/\\cellcolor\{blue!20\}/g' > /tmp/cbmctime.out
    #echo $cbmctime | sed 's/cbmcTimeSum: //' > /tmp/cbmctime.out
    
    # Total time
    totaltime=$(grep 'modulesTimeSum: ' output.log)
    echo $totaltime | sed 's/modulesTimeSum: //' > /tmp/totaltime.out
   
    #exit /_mt_main_n_result
    cd ..
    cat totaltime.txt | sed 's/^/\\cellcolor\{gray!20\}/g' > /tmp/icbmctime.out
    #cat totaltime.txt > /tmp/icbmctime.out
    cat ur.txt | sed 's/ / \&/g' > /tmp/ur.out
    
    paste -d, /tmp/name.out /tmp/line.out /tmp/isr_number.out /tmp/counterexample.out /tmp/counterexample.out /tmp/counterexample.out /tmp/counterexample.out /tmp/icbmctime.out /tmp/ur.out /tmp/counterexample.out  /tmp/counterexample.out /tmp/cbmctime.out /tmp/totaltime.out | sed 's/,/\&/g' | tr '\n' '@' | sed 's/@/ \\\\\n/g' >> $TMPPATH

    cd ..
done

LOC=`awk -F\& '{sum += $2} END {print sum}' $TMPPATH`
ISRSUM=`awk -F\& '{sum += $3} END {print sum}' $TMPPATH`
ASSERTSUM=`awk -F\& '{sum += $4} END {print sum}' $TMPPATH`
VASUM=`awk -F\& '{sum += $5} END {print sum}' $TMPPATH`
ICBMCVIOSUM=`awk -F\& '{sum += $6} END {print sum}' $TMPPATH`
ICBMCTPSUM=`awk -F\& '{sum += $7} END {print sum}' $TMPPATH`
ICBMCTIMESUM=`awk -F\& '{sum += $8} END {print sum}' $TMPPATH`
NICWNSUM=`awk -F\& '{sum += $12} END {print sum}' $TMPPATH`
NICTPSUM=`awk -F\& '{sum += $13} END {print sum}' $TMPPATH`
NICBETIMESUM=`awk -F\& '{sum += $14} END {print sum}' $TMPPATH`
NICTIMESUM=`awk -F\& '{sum += $15} END {print sum}' $TMPPATH`


NUM_LINES=`wc -l < $TMPPATH`
NUM_LINES=$(($NUM_LINES))

echo "\\midrule" >> $TMPPATH
echo "\\textbf{Total} & $LOC & $ISRSUM & $ASSERTSUM & $VASUM & $ICBMCVIOSUM & $ICBMCTPSUM & $ICBMCTIMESUM & & & $NICWNSUM & $NICTPSUM & \\cellcolor{blue!20}$NICBETIMESUM & $NICTIMESUM\\\\" >> $TMPPATH
echo "\\specialrule{0.03em}{2pt}{2pt}" >> $TMPPATH
echo "Well done !"

cat $TMPPATH | sed 's/_/\\_/g' > icbmc_table.txt


