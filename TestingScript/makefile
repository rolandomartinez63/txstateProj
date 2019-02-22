#!/bin/bash
lookfor=$1
#this function is meant to create a file if it does not exist
create(){
if [ -f $1 ]; then 
  echo we found it
else
  echo this isnt here
fi
}

delete(){
echo Enter file to be deleted: 
read delfile
if [ -f $delfile ]; then
 rm $delfile
 echo $delfile is Deleted
else
 echo This file does not exist 
fi
}
#this function will display the time and date
timedate(){
set $(date)
echo The time is $4
date=$(date +"%d-%m-%y")
echo The date is $date
}

#this function will display the contents of file
usecat(){
if [ -f $1 ]; then
 echo Here are the contents of $lookfor
contents[0]=$(cat $lookfor)
echo ${contents[0]}
else
 echo This file does not exist
fi
}

append(){
 if [ -f $lookfor ]; then
 Learning Scripts and Shell Programming
 else 
  echo this file does not exist.
fi
}

countline(){
 wc -l $lookfor
}

size(){
echo this is the size of $lookfor
stat -c %s $lookfor
}

countchar(){
echo this is how many chars in this file
wc -w $lookfor
}
#calling create function
create $1
echo time and date is $(date)

#calling to display the date
timedate
usecat $lookfor
echo number of lines in $lookfor
countline
size
#try to use GREP to get only the first number
countchar
delete 
