#!/bin/bash

#Colours
red='\u001b[1;91m'
green='\u001b[1;92m'
cyan='\u001b[1;96m'
magenta='\u001b[1;95m'
white='\u001b[1;97m'

#Default value
cpp_flags="g++ -std=c++17 -O2 -g"
c_flags="gcc -O2 -w -lm"
java_flags="javac"
timeLimit=1

#Validate arguments given
if [ $# -lt 1 ]
then 
	echo -e "${magenta}[+] Usage incorrect"
	echo -e "${magenta}   Format: $0 *.cpp, *.c or *.java"
	exit 1;
fi

OPTIND=$((OPTIND+1))
while getopts t: name
do
    case $name in
    t)    timeLimit=${OPTARG};;
    esac
done

#Check filetype
if [ "${1##*.}" == 'cpp' ]
then
	flags=$cpp_flags
	baseName="`basename $1 .cpp`" #base filename
elif [ "${1##*.}" == 'c' ]
then
	flags=$c_flags
	baseName="`basename $1 .c`" #base filename
elif [ "${1##*.}" == 'java' ]
then
	flags=$java_flags
	baseName="`basename $1 .java`" #base filename
else
	echo -e "${magenta}[+] Filetype invalid"
	echo -e "${magenta}   Make sure file is of type *.cpp, *.c or *.java" 
	exit 2;
fi

#Exit script cleanly
trap "{ rm -f feedback a.out r.out r.check $baseName.class Main.class; }" SIGTERM SIGQUIT SIGINT EXIT

#Header output
echo -e "${magenta}-----------------------------------------------------"
echo -e "      ${magenta}+===---${cyan}Problem Name: $baseName${magenta}---===+"
echo -e "      ${magenta}+===---${cyan}Time Limit: $timeLimit sec${magenta}---===+"
echo -e "${magenta}-----------------------------------------------------"


#Compile
echo -e "${cyan}[+] Compiling $1 with $flags"
echo "$flags `pwd`/$1 2> feedback" | sh

result=$?
if [ $result != 0 ]
then
	echo -e "${magenta}[+] Compile Error"
	exit 1;
fi

#Run for all files of format baseName.*.in and check baseName.*.out
echo -e "${cyan}[+] Running Test Cases\n"

acceptedCount=0

for i in $baseName.*.in
do
	if [ "${i}" == "$baseName.*.in" ]
	then
		echo -e "${magenta}[+] No input files located"
		exit 1;
	fi
	totalCount=$((totalCount+1))
	start=
	end=
	if [ "$flags" == "$java_flags" ]
	then
		start=`date +%s%N`
		timeout ${timeLimit}s java Main < ${i} > r.out
		end=`date +%s%N`
		exitCode=$?
	else
		start=`date +%s%N`
		timeout ${timeLimit}s ./a.out < ${i} > r.out
		end=`date +%s%N`
		exitCode=$?
	fi

	time="$(($end - $start))"
	constraint=`awk "BEGIN {x=$timeLimit; y=1000000000; z=x*y; print z}"`

	echo "`awk "BEGIN {x=$constraint; y=$time; z=(x<y); print z}"`"
	echo "$exitCode"
	echo "$constraint"
	
	if [ "`awk "BEGIN {x=$constraint; y=$time; z=(x<y); print z}"`" == 1 ]
	then
		echo -e "${white}Checking ${i%.in}: \n > ${red}[TLE] [$time ns] Time Limit Exceeded `awk  "BEGIN {x=$timeLimit; y=1000000000; z=x*y; print z}"` ns"
	elif [ $exitCode != 0 ]
	then
		echo -e "${white}Checking ${i%.in}:   ${red}[RTE] [$time ns] Runtime Error"
	else
		sdiff -w55 --strip-trailing-cr ${i%.in}.out r.out > r.check
		if [ $? != 0 ]
		then
			echo -e "${white}Checking ${i%.in}:   ${red}[WA] [$time ns] Wrong Answer"
			echo -e "${cyan}[Expected Output]               [Generated Output]"
			echo -e "${red}-----------------------------------------------------"
			cat r.check
			echo -e "${red}-----------------------------------------------------"
		else
			acceptedCount=$((acceptedCount+1))
			echo -e "${white}Checking ${i%.in}:   ${green}[AC] [$time ns] Accepted"
		fi
	fi
done

echo -e
echo -e "${white}Accepted $acceptedCount / $totalCount"
