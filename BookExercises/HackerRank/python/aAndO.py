#!/usr/bin/python

with open("array.txt", "r") as f:
    inputs = f.readlines()

data = map(str.strip, inputs)
s,t = data[0].split(' ')
s,t = [int(s), int(t)]
a,b = data[1].split(' ')
a,b = [int(a), int(b)]
m,n = data[2].split(' ')
m,n = [int(m), int(n)]
da = map(int,data[3].split(' '))
do = map(int, data[4].split(' '))


aCount = 0
oCount = 0

for apple in da:
    if a + apple >= s and a + apple <= t:
        aCount += 1

for orange in do:
    if b + orange >= s and b + orange <= t:
        oCount += 1

print aCount
print oCount
