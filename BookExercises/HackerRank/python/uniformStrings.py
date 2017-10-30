#!/usr/bin/python

import sys
import string

def getCharWeight(c):
    return ord(c.lower()) - 96 

with open("array.txt","r") as f:
    data = f.readlines()

s = data[0].strip()
n = int(data[1].strip())

q = []
for line in data[2:]:
    q.append(int(line.strip()))

sus = [False] * 10 * 1000 * 1000

index = 0
mul = 1
while index < len(s):
    if (index + 1 != len(s) and s[index] == s[index+1]):
        mul += 1
    else:
        mul = 1
    sus[getCharWeight(s[index]) * mul] = True 
    index += 1    

for item in q:
    if sus[item]:
        print "YES"
    else:
        print "NO"

