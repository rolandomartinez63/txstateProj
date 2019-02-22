#!/bin/sh
echo "Is it morning? Please say it aint so.. yes or no"
read timeofday
yes="yes"
echo $timeofday
if [ "$timeofday" = "yes" ]
then
 echo "ugh good morning"
else
 echo "I'll sleep more"
fi
 exit 0
