#!/bin/bash
a=1
b=1
x=$((a+b))
max=1000
echo 1
echo 1
echo $x
while [ $x -lt $max ]
do
    a=$b
    b=$x
    x=$((a+b))
    if [ $x -gt $max ]
    then
        echo Done! Last number in sequence: $b, max number to look up to: $max
    else
        echo $x
    fi
done