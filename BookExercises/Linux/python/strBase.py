"""def to_str(n, base):
    convert_string ="0123456789ABCDEF"
    if n < base:
        #print (convert_string[n])
        return convert_string[n]
    else:
        to_str(n / base, base) + convert_string[n % base]
"""
from pythonds.basic.stack import Stack
r_stack = Stack()

def to_str(n, base):
    convert_string = "0123456789ABCDEF"
    #print(convert_string[n % base])
    r_stack.push(convert_string[n % base])
    while n > 0:
        if n < base:
            r_stack.push(convert_string[n])
        else:
            r_stack.push(convert_string[n % base])
        n = n // base
    res = ""
    
    while not r_stack.isEmpty():
        res = res + str(r_stack.pop())
    return res


print(to_str(1453, 16))
print(to_str(1453, 2))
