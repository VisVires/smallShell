#!/usr/bin/python

import sys
import string

s = raw_input().strip()


#move through string in range of 3 and incrementing one for start each time to check if beautiful

def isBeautiful(s):
    index = 0
    no = '010'
    #iterate one space until we reach length of string
    while index < len(s)-2:
        if s[index:index+3] == '010':
            return False
        index += 1
    return True



print isBeautiful(s)
print (int(len(s)) - len(s.replace('010', '01')))
