#!/bin/bash

# Zhang yuan: I manually ran this command for each property and wrote down time
# $1 is the input parameter that denotes the number of times
set -u

#source ./realworld18dirs.sh
#source ./realworld18dirs_2.sh
#source ./realworld18dirs_3.sh
#source ./realworld18dirs_4.sh
#source ./realworld18dirs_5.sh
#source ./realworld18dirs_6.sh
source ./realworld18dirs_question.sh
for name in ${TEST_DIRS}
do
	cd ${name}
    echo -e "\033[35m |--------------------------- Checking $name ---------------------------| \033[0m"
	(time ./cbmc --mm irq --unwind 2 main.c) >& runtime$1.out
	flag=`grep "VERIFICATION SUCCESSFUL" runtime$1.out`
	#echo $flag
	if [ "$flag" ]; then
	   echo -e "\033[41;33m Verification success \033[0m"
	else
	   echo "Verification failed"
	fi	
	cd ..

done
