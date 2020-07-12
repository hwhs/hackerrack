#! /bin/bash

while read line
do
    echo $line | cut -c1-4
done

#cut -b1-4 /dev/stdin