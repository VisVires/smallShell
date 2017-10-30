#!/usr/bin/python

import sys
import string

def getCharVal(c):
    return ord(c) - 96

def getDiff(c1, c2):
    return abs(ord(c1) - ord(c2))

def compareRev(s):
    index = 0
    rindex = len(s) - 1
    while index < rindex:
        #compare values at each
        diff1 = getDiff(s[index + 1], s[index])
        diff2 = getDiff(s[rindex - 1], s[rindex])
        print diff1, diff2
        if diff1 != diff2:
            return "Not Funny"
        index += 1
        rindex -= 1
    return "Funny"    


with open("array.txt", "r") as f:
    data = f.readlines()

inputs = int(data[0].strip())

index = 1
while index < len(data):
    s = data[index].strip()
    print(compareRev(s))
    index += 1



