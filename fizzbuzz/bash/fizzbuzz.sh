#!/usr/bin/bash

for i in {1..100}
do
	s=""
	if ((i % 3 == 0)); then
		s=Fizz
	fi

	if ((i % 5 == 0)); then
		s+=Buzz
	fi

	if [ ! $s ]; then
		s=$i
	fi
	echo $s
done
