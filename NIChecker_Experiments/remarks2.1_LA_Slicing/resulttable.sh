#!/bin/bash
set -u
#BENCHMARK_DIR_PPREFIX=~/zyworkspace/nichecker/Experiment/remarks2.1
# Import the generic commands to run tests and stuff
source ./testdirs.sh
#source ./testdirs1.sh

#output="results.md"
#touch $output
rm -f /tmp/table_box.out
TMPPATH=/tmp/table_box.out
# output="$(date +%y-%m-%d_%H-%M).md"
#echo "### $(date)" > $TMPPATH
#echo "basic+LA" >> $TMPPATH
#echo "Name & LOC &\\#WN & CBMCtime & Totaltime & Memory\\\\" >> $TMPPATH
#echo "\\midrule" >> $TMPPATH

for name in ${BENCHMARK_DIRS}
do
    cd $name
    # name of directory
    echo "$name" > /tmp/name.out
    wc -l < ${name}_001.c > /tmp/line.out
    cd _mt_${name}_001_result
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
    cat /tmp/safeinfo.out |grep "memory: "| sed 's/MB//g' | sed 's/:/\&/g' | tr '\n' '@' | sed 's/@/ \\\\\n/g' > /tmp/memory.out
    cat /tmp/memory.out | awk '{sum+=$2} END {print sum}' > /tmp/summemory.out

    cbmctime=$(grep 'cbmcTimeSum: ' output.log)
    echo $cbmctime | sed 's/cbmcTimeSum: //' > /tmp/cbmctime.out
    # Total time
    totaltime=$(grep 'modulesTimeSum: ' output.log)
    echo $totaltime | sed 's/modulesTimeSum: //' > /tmp/totaltime.out
    #paste -d, /tmp/name.out /tmp/line.out /tmp/counterexample.out /tmp/cbmctime.out /tmp/totaltime.out /tmp/summemory.out| sed 's/,/\&/g' | tr '\n' '@' | sed 's/@/ \\\\\n/g' >> $TMPPATH
    paste -d, /tmp/counterexample.out /tmp/cbmctime.out | sed 's/,/ \& /g' | tr '\n' '@' | sed 's/@/ \& \n/g' >> $TMPPATH
    cd ..
    cd ..
done

#LOC=`awk -F\& '{sum += $2} END {print sum}' $TMPPATH`
#TOTALWN=`awk -F\& '{sum += $3} END {print sum}' $TMPPATH`
#TOTALCBMC=`awk -F\& '{sum += $4} END {print sum}' $TMPPATH`
#TOTALTIME=`awk -F\& '{sum += $5} END {print sum}' $TMPPATH`
#TOTALMEMORY=`awk -F\& '{sum += $6} END {print sum}' $TMPPATH`


NUM_LINES=`wc -l < $TMPPATH`
NUM_LINES=$(($NUM_LINES))

#echo "\\midrule" >> $TMPPATH
#echo "\\textbf{Total} & $LOC & $TOTALWN & $TOTALCBMC & $TOTALTIME & $TOTALMEMORY \\\\" >> $TMPPATH
echo "Well done !"
#cat $TMPPATH
cd ..
cd ./remarks_result
cat $TMPPATH > la_slice.txt


