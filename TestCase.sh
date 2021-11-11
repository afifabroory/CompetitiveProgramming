#!/bin/bash

# This code from https://github.com/GermainZH/test-case-tool
# There are some changes in this code!

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

OPTIND=$((OPTIND+1))
clean=1
while getopts t:ks:f: arg
do
    case $arg in
    t)    timeLimit=${OPTARG};;
	k)	  clean=0;;	# Keep compiled code.
	s)    echo "STRESS TEST SOON! ${OPTARG}";;
	f) 	  flags=${OPTARG};;
    esac
done

if [ $clean == 1 ]
then
	#Exit script cleanly
	trap "{ rm -f feedback a.out r.out r.check $baseName.class Main.class; }" SIGTERM SIGQUIT SIGINT EXIT
fi

#Header output
echo -e "${magenta}-----------------------------------------------------"
echo -e "      ${magenta}+===---${cyan}Problem Name: $baseName${magenta}---===+"
echo -e "      ${magenta}+===---${cyan}Time Limit: $timeLimit s${magenta}---===+"
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
echo -e "${cyan}[+] Running Test Cases"
echo -e "${cyan}[!] Time calculation in the script are not accurate!\n"

acceptedCount=0

for i in $baseName.*.in
do
	if [ "${i}" == "$baseName.*.in" ]
	then
		echo -e "${magenta}[+] No input files located"
		exit 1;
	fi

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
		exitCode=$?
		end=`date +%s%N`
	fi

	time="$(($end - $start))"
	
	testCase=${i%.in}
	printf "${white}Checking Test Case #${testCase/"${baseName}".}:" 
	if [ $exitCode == 124 ]
	then
		printf "\n > ${red}[TLE] \e[91m[%'.2f ns]\e[0m" $time 
		printf " ${white}Time Limit Exceeded %'.2f ns\n" `awk  "BEGIN {x=$timeLimit; y=1000000000; z=x*y; print z}"` 
		break
	elif [ $exitCode != 0 ]
	then
		echo -e " ${red}[RTE] [$time ns] Runtime Error"
		break
	else 
		sdiff -w55 --strip-trailing-cr ${i%.in}.out r.out > r.check
		if [ $? != 0 ]
		then
			echo -e " ${red}[WA] [$time ns] Wrong Answer\n"
			echo -e "${cyan}[Expected Output]               [Generated Output]"
			echo -e "${red}-----------------------------------------------------"
			cat r.check
			echo -e "${red}-----------------------------------------------------"
			break
		else
			acceptedCount=$((acceptedCount+1))
			printf " ${green}[AC] [%'.2f ns] Accepted\n" $time
		fi
	fi
done

totalCount=( $baseName*.in )

echo -e ""
echo -e "${white}Accepted $acceptedCount / ${#totalCount[@]}"
