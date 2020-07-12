#! /bin/bash

i=0

while read country || [ -n "$country" ];
do
#    echo $country
#    echo $i
    countries[$i]=$country
    (( i+=1 ))
done

#echo ${countries[@]}
#echo ${#countries[@]}
con_countries=("${countries[@]}" "${countries[@]}" "${countries[@]}")
echo ${con_countries[@]}

#############################
#while read country || [ -n "$country" ];
#do
#    countries=("${countries[@]}" $country)
#done

#con_countries=("${countries[@]}" "${countries[@]}" "${countries[@]}")
#echo ${con_countries[@]}