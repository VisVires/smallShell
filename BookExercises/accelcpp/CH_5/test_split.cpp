#include <iostream>
#include <string>
#include <vector>
#include "split.h"

using std::cout;        using std::vector;
using std::cin;         using std::string;
using std::endl;

int main()
{
    string s;
    while(getline(cin, s))
    {
        vector<string> v = split(s);

        /*vector<string> sorted = sort_lower(v);
        //write each word in v
        for (vector<string>::size_type i = 0; i != sorted.size(); ++i)
        {
            cout << sorted[i] << endl;
        }*/

        vector<string> palin = palidromes(v);
        //write each word in v
        for (vector<string>::size_type i = 0; i != palin.size(); ++i)
        {
            cout << palin[i] << endl;
        }
    }
    return 0;
}
