#!/bin/bash
source ./realworld18dirs.sh

for name in ${TEST_DIRS}
do
  cd $name
  rm -rf ./main_result
  rm -f ./_LA__mt_main.c
  rm -f ./istLab__mt_main.c
  rm -f ./label_istLab__mt_main.c
  rm -f ./_mt_main.c
  rm -f ./seq_istLab__mt_main.c
  rm -f ./slice_seq_istLab__mt_main.c
  rm -f ./slice_tmp_seq_istLab__mt_main.c
  
  cd ..

done
echo "done"
