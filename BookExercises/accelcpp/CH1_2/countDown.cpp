#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;


int main()
{
   int a;
   int b;

    cout << "Please enter 2 numbers: ";
    cin >> a;
    cin >> b;

    if (a > b)
       cout << a << " is larger" << endl;
    else if (a < b)
        cout << b << " is larger." << endl;
    else
        cout << "They are the same size" << endl;

    a > b ? cout << a << " is larger" << endl : cout << b << " is larger";
}

