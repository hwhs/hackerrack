#! /bin/bash

read x
read y
#echo $x, $y

if ((x > y)); then    #if [ "$x" -gt "$y" ]; then
    echo "X is greater than Y"
elif ((x < y)); then  #elif [ "$x" -lt "$y" ]; then
    echo "X is less than Y"
else
    echo "X is equal to Y"
fi