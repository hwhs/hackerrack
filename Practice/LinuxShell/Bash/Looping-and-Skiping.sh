#! /bin/bash

i=0

for i in {1..100}
do
    if [ $(($i%2)) != 0 ]; then
        echo $i
    fi
done

#seq 1 2 99