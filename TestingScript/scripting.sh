#!/bin/sh
sentence="Hello"
echo $sentence
echo "The program $0 is now running"
echo "the second parameter was $2"
echo "The first parameter was $1"
echo "The paramter list was $*"
echo "The user's home directory is $HOME"
echo "Please enter a new greeting"
read sentence
echo $sentence
echo "The script is now complete"
exit 0
