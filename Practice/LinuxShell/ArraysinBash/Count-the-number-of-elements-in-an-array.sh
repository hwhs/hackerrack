#! /bin/bash

while read country || [ -n "$country" ];
do
    countries=(${countries[@]} $country)
done

echo ${#countries[@]}