#!/usr/bin/python

import sys

with open("array.txt", "r") as f:
    data = f.read().strip()

changeCount = 0
sampleWord = "SOS"

index = 0
while index < (len(data)-2):
    phrase = data[index] + data[index+1] + data[index+2]
    #count differences
    if phrase != sampleWord:
        for i, letter in enumerate(phrase):
            if letter != sampleWord[i]:
                changeCount += 1
    index += 3 
print changeCount

print data
