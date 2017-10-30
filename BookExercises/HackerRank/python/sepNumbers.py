#!/usr/bin/python

def compValues(val1, val2):
    if val1[0] == '0' or val2[0] == '0':
        return False
    v1 = int(val1)
    v2 = int(val2)
    return v2-v1 == 1


def nines(s):
    for item in s:
        if item != '9':
            return False
        #print item
    return True



with open("array.txt", "r") as f:
    data = f.readlines()

q = int(data[0].strip())


for s in data[1:]:
    s = s.strip()
    maxLen = len(s)//2
    l = 1
    beautiful = False
    #while the length of the jump is less than the maximum length check the next number
    while l <= maxLen:
        beautiful = True
        #get first item
        first = s[:l]
        index = len(first)
        jump = len(first)
        v = first
        while index < len(s):
            if nines(s[index-jump: index]):
                jump1 = jump
                jump2 = jump1 + 1
                jump = jump2
            else:
                jump1 = jump
                jump2 = jump1
            val1 = s[index-jump1:index]
            val2 = s[index: index+jump2]
            #print val1, val2
            if not compValues(val1, val2):
                beautiful = False
                break
            index += jump2
            v = val2
        if beautiful:
            print("%s %s" % ("YES", first))
            break
        l += 1
    if not beautiful:
        print "NO"


