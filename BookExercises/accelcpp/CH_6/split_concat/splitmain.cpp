#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "split69.h"

using std::iterator;        using std::cout;
using std::vector;          using std::endl;
using std::cin;             using std::string;

void vcout(const std::vector<std::string>&);
string concat_Words(const vector<string>&);

int main()
{
    std::string s;
    std::vector<std::string> splitV;
    while(getline(std::cin, s))
    {
        splitV = split(s);
        vcout(splitV);
    };

    string words = concat_Words(splitV);
    cout << words;

    return 0;
}

void vcout(const std::vector<std::string>& v)
{
    for(std::vector<std::string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
}

string concat_Words(const vector<string> &v)
{
    string words;
    words = accumulate(v.begin(), v.end(), words);
    return words;
}
