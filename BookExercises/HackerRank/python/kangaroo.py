#!/usr/bin/python

with open("array.txt" , "r") as f:
    data = f.read()

inputs = map(int, data.split())
print inputs

x1 = inputs[0]
v1 = inputs[1]
x2 = inputs[2]
v2 = inputs[3]

if x1 == x2:
    print "YES"
if v2 > v1:
    print "NO"
else:
    while x1 < x2:
        x1 += v1
        x2 += v2
        if x1 == x2:
            print "YES"
    if x1 != x2:
        print "NO"
