#! /bin/bash

i=0

while read country
do
#    echo $country
#    echo $i
    countries[$i]=$country
    (( i+=1 ))
done

#echo ${countries[@]}
pattern=( ${countries[@]/*[Aa]*/} )
echo ${pattern[@]}