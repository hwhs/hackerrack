#! /bin/bash

read a
read b
read c
#echo "$a $b $c"

if ((a+b > c)) && ((a+c > b)) && ((b+c > a)); then
    if [ "$a" == "$b" ] && [ "$a" == "$c" ]; then
        echo "EQUILATERAL"
    elif [ "$a" == "$b" ]; then
        echo "ISOSCELES"
    elif [ "$b" == "$c" ]; then
        echo "ISOSCELES"
    elif [ "$a" == "$c" ]; then
        echo "ISOSCELES"
    else
        echo "SCALENE"
    fi
fi

#########
#if [ "$a" == "$b" ] && [ "$b" == "$c" ]; then
#    echo "EQUILATERAL"
#elif [ "$a" != "$b" ] && [ "$b" != "$c" ] && [ "$a" != "$c" ]; then
#    echo "SCALENE"
#else
#    echo "ISOSCELES"
#fi