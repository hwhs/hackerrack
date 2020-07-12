#! /bin/bash

read n
read -a A

#echo $n
#echo ${A[@]}

x=${A[0]}
for (( i=1; i<${#A[*]}; i++ )); do
    x=$((x^${A[i]}))
    #echo "A[$i]=${A[i]}, x=$x"
done
echo $x
#############################
#read
#numbers=($(cat))
#echo ${numbers[@]}
#numbers=${numbers[*]}
#echo $((${numbers// /^}))