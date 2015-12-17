#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "What is your name? ";
    std::string name;
    cin >> name;
    cout << "Hello, " << name
         << endl << "And what is yours? ";
    cin >> name;
    cout << "Hello, " << name
         << "; nice to meet you too!" << endl;
    return 0;
}
