#!/usr/bin/python

with open("array.txt", "r") as f:
    data = f.readlines()

inputs = int(data[0])

totalRead = 0
index = 1
grades = []
for item in data[1:]:
    grades.append(int(item))
print inputs
print grades
