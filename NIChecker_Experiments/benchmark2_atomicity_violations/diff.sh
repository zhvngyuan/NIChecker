#!/bin/bash

TMPPATH=/tmp/compare.out
cat compare.txt | tr "&" " " > $TMPPATH
#RT= `awk -F\& '{rt = $7 -$10} END {print rt}' $TMPPATH`
cat $TMPPATH | awk '{print ($7 - $16)/$7}'
#cat $TMPPATH | awk '{print ($7 - $10)/$7}'
#echo"& $RT" >> $TMPPATH
#cat $TMPPATH
