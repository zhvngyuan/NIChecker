#!/bin/bash

set -u
#source ./realworld18dirs.sh

#for name in ${TEST_DIRS}
#do
	#cd ${name}
	#find icbmc output file *.out (except for output.log)
	files=`find ./ -type f  -name '*.out'`
	rm -f /tmp/totaltime_multi.out
	rm -f ./countvar.txt
	for i in $files 
	do 
  		#cat $i | grep "real" | tr "m" " " | tr "s" " " >> /tmp/totaltime_multi.out
  		cat $i | grep "variables" | tr "," " " >> countvar.txt
  		
	done
	#sum for total time 
	#cat /tmp/totaltime_multi.out | awk '{sum+=$3} END {print sum}' > totaltime.txt
	cat countvar.txt | awk '{sum+=$1}END{print sum}' #> /tmp/variables.out
	cat countvar.txt | awk '{sum+=$3}END{print sum}' #> /tmp/clauses.out
	
	cd ..
#done  		
