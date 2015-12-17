#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include "split_6.h"


using std::cout;        using std::cin;
using std::endl;        using std::string;
using std::vector;      using std::iterator;

void vcout(const vector<string>&);

int main()
{
    string s;
    vector<string> urls;
    while(getline(cin, s))
    {
        urls = find_urls(s);
        vcout(urls);
    };

    return 0;
}

void vcout(const vector<string>& v)
{
    for(vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << *iter << endl;
    }

}
