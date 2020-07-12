#! /bin/bash

read expression
#echo $expression

#echo "scale = 3; $expression" | bc -l
printf "%.3f" $(echo "scale=3;$expression" | bc -l)