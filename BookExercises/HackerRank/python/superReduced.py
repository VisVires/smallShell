#!/usr/bin/python

def super_reduced_string(s):
    reducing = True
    #it can still be reduced
    while reducing:
        reducing = False
        #holds the final string
        index = 0
        fs = ""
        length = len(s)
        while index < (len(s) - 1):
            if s[index] == s[index+1]:
                reducing = True
                if len(s) == 2:
                    return "Empty String"
                fs = s[:index] + s[index+2:]
                s = fs
                break
            index += 1
    return s




with open("array.txt", "r") as f:
    data = f.read().strip()

s = super_reduced_string(data)
    
print s


