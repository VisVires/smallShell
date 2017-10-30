#include <iterator>
#include <iostream>

using std::iterator;        using std::cin;
using std::cout;            using std::endl;


template <class Type> void swapMe(Type &a, Type &b);

int main()
{
    int a = 12;
    int b = 14;

    cout << "a is: "<< a << " b is: " << b << endl;
    swapMe(a, b);

    cout << "a is: "<< a << " b is: " << b << endl;

    return 0;
}

template <class Type> void swapMe(Type &a, Type &b)
{
    Type temp;

    temp = a;
    a = b;
    b = temp;
}
