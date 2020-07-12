#! /bin/bash

while read country || [ -n "$country" ];
do
#    echo $country
    countries=(${countries[@]} $country)
done

echo ${countries[3]}