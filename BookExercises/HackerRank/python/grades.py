#!/usr/bin/python


def getNewGrade(grade):
    if grade < 38:
        return grade
    if grade % 5 > 2:
        return grade + (5-(grade % 5))
    else:
        return grade


def solve(grades):
    newGrades = []
    for grade in grades:
        newGrades.append(getNewGrade(grade))
    return newGrades
        

with open("array.txt", "r") as f:
    data = f.readlines()

inputs = int(data[0])

totalRead = 0
index = 1
grades = []
for item in data[1:]:
    grades.append(int(item))
result = solve(grades)

print '/n'.join(map(str, result))

