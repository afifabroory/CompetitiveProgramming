#!/bin/bash
while true
do
	g++ -O2 generateRandomTestCase.cpp -o generate
	./generate > solution.1.in && (./naive < solution.1.in) > solution.1.out && 
	./generate > solution.2.in && (./naive < solution.2.in) > solution.2.out && 
	./generate > solution.3.in && (./naive < solution.3.in) > solution.3.out && 
	./generate > solution.4.in && (./naive < solution.4.in) > solution.4.out && 
	./generate > solution.5.in && (./naive < solution.5.in) > solution.5.out && 
	./generate > solution.6.in && (./naive < solution.6.in) > solution.6.out && 
	./generate > solution.7.in && (./naive < solution.7.in) > solution.7.out && 
	./generate > solution.8.in && (./naive < solution.8.in) > solution.8.out && 
	./generate > solution.9.in && (./naive < solution.9.in) > solution.9.out && 
	./generate > solution.10.in && (./naive < solution.10.in) > solution.10.out && 
	./generate > solution.11.in && (./naive < solution.11.in) > solution.11.out && 
	./generate > solution.12.in && (./naive < solution.12.in) > solution.12.out &&
	./generate > solution.13.in && (./naive < solution.13.in) > solution.13.out &&
	./generate > solution.14.in && (./naive < solution.14.in) > solution.14.out &&
	./generate > solution.15.in && (./naive < solution.15.in) > solution.15.out && 
	../../TestCase.sh solution.cpp -t 0.5
	sleep 2
	clear
done
