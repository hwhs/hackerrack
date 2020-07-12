#! /bin/bash

read n
#echo $n

sum=0
for i in $(seq 1 $n)
do
    read x
    #echo $x
    sum=$(( $sum+$x ))
    #echo $sum
done

#echo $sum
#echo $n
printf "%.3f\n" $(echo "$sum/$n" | bc -l)
#printf "%.3f\n" $(bc -l <<< "$sum/$n")