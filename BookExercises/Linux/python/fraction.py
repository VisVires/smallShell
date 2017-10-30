 
def gcd(m,n):
    while m % n != 0:
        old_m = m
        old_n = n
        m = old_n
        n = old_m % old_n
    return n


class Fraction:
    def __init__(self, top, bottom):
        self.num = top
        self.den = bottom
    
    def show(self):
        print("%d/%d" % (self.num, self.den))
    
    def __str__ (self):
        return str(self.num) + "/" + str(self.den)
   
    def __add__(self, other_fraction):
        new_num = self.num * other_fraction.den + self.den*other_fraction.num
        new_den = self.den * other_fraction.den
        common = gcd(new_num, new_den)
        return Fraction(new_num // common, new_den // common)

    def __eq__(self, other):
        first_num = self.num * other.den
        second_num = other.num * self.den
        return first_num == second_num

    def getDen(self):
        return self.den

    def getNum(self):
        return self.num


my_f = Fraction(2,5)
print(my_f.getDen())
print(my_f.getNum())

my_f2 = Fraction(3,6)
my_f4 = Fraction(90,100)
print(my_f2)
f3 = my_f + my_f2
print(f3)
my_f.show()
print(my_f)
print(my_f == my_f2)
print(f3 == my_f4)
