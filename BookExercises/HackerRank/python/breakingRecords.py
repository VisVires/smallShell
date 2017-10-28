#!/usr/bin/python
import sys

def getRecord(s):
    high = s[0]
    low = s[0]
    hiCount = 0
    loCount = 0
    for game in s:
        if game > high:
            print high
            high = game
            hiCount += 1
        elif game < low:
            low = game
            loCount += 1
    
    games = []
    games.append(hiCount)
    games.append(loCount)
    return games


with open("array.txt", "r") as file:
    data = file.readlines()


num = int(data[0].strip())
inputs = map(int, data[1].split(" "))
print inputs

result = getRecord(inputs)
print result
