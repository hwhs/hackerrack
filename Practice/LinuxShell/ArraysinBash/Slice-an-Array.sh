#! /bin/bash

i=0
j=0

while read country
do
#    echo $country
#    echo $i
    if [ $i -ge 3 ] && [ $i -le 7 ]; then
        countries[$j]=$country
        (( j += 1 ))
    fi
    (( i += 1 ))
done

echo ${countries[@]}

######################
#i=0

#while read country
#do
#    countries[$i]=$country
#    (( i += 1 ))
#done

#echo ${countries[@]:3:5}
#5 is the length between 3, 7 => (7-3+1)=5