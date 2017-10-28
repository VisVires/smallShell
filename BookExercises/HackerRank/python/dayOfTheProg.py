#!/usr/bin/python

import sys

def solve(year):
    if year > 1918:
        #divisible by 400 or divisible by 4 and not divisible by 100
        if year % 400 == 0 or (year % 4 == 0 and not year % 100 == 0):
            day = "12"
            month = "09"
        else:
            day = "13"
            month = "09"
    # julian year
    elif year < 1918:
        if year % 4 == 0:
            day = "12"
            month = "09"
        else: 
            day = "13"
            month = "09"
    #year is th switch
    elif year == 1918:
        day = "26"
        month = "09"
    result = day + "." + month + "." + str(year)
    return result



year = int(raw_input().strip())
result = solve(year)
print result
