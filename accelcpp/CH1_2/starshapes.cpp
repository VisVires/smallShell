#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std:: string;

int main()
{
    //set sides
    int tbLength = 8;
    int sidesLength = tbLength;

    //set border character
    const string border = "*";
    //set row character
    const string::size_type top = tbLength;
    const string::size_type side = sidesLength;
    int r = 1;
    while(r != side)
    {
            //write bottom border
            if(r == side - 1)
            {
                int c = 0;
                while (c != top)
                {
                    cout << border;
                    ++c;
                }
                cout << endl;
            }
            //write middle
            else
            {
                cout << border;
                int s = 0;
                while (s != r)
                {
                    cout << " ";
                    ++s;
                }
                cout << border;
                cout << endl;
            }
            ++r;
    }
    return 0;
}
