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
	echo $name
	cat /tmp/totaltime_multi.out | awk '{sum+=(($2*60)+$3)} END {print sum}' #> /tmp/minites_60.out
	
	cat /tmp/totaltime_multi.out | awk '{sum+=$3} END {print sum}' #> /tmp/seconds.out
	echo 
	
	cd ..
done  	


