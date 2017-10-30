#!/usr/bin/python

import sys
import string

with open("array.txt", "r") as f:
    data = f.read().strip()

lst = [0] * 26
for letter in data:
    if letter != " ":
        l = ord(letter.lower()) - 97
        lst[l] += 1

pan = True
for i in lst:
    if i == 0:
        pan = False
        break

if pan:
    print "pangram"
else:
    print "not pangram"




