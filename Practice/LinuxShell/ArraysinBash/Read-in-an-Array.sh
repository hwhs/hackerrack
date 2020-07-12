#! /bin/bash

i=0

while read line
do
#    echo $line
#    echo $i
    country[$i]=$line
    (( i += 1 ))
done

echo ${country[@]}

#tr "\n" " "