#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int getPad()
{
    int pad;
    cout << "What pad would you like? ";
    cin >> pad;
    return pad;
}

int main()
{
    //ask for name
    cout << "Please enter your first name: ";
    //read the name
    string name;
    cin >> name;

    //build message that we want to write
    const string greeting = "Hello, " + name + "!";
    //number of blanks around the greeting
    const int pad = getPad();
    //const int pad2 = 8;
    //number of rows and cols to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    //write a blank line to seperate output from input
    cout << endl;
    //write row rows of output
    //we have written r rows so far
    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;
        //we have written c columns so far
        while (c != cols)
        {
            //if r = pad +1 and c = pad +1 write greeting and move c
            if (r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                //are we on the border
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }

    return 0;
}
