#!/usr/bin/python

with open("array.txt", "r") as f:
    data = f.read().strip()

upperCount = 0

for letter in data:
    if letter.isupper():
        upperCount += 1


print upperCount + 1
