#!/usr/bin/python


def checkHacker(s):
    compWord = "hackerrank"
    iter1 = 0
    index = 0
    while index < len(s):
        if(compWord[iter1] == s[index]): 
            iter1 += 1
            if iter1 == len(compWord):
                return "YES"
        index += 1
    return "NO"
        


with open("array.txt", "r") as f:
    data = f.readlines()

queries = int(data[0].strip())
inputs = []

for line in data[1:]:
    s = line.strip()
    print (checkHacker(s))


