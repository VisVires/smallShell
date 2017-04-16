#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include "split69.h"

void vcout(const std::vector<std::string>&);

int main()
{
    std::string s;
    std::vector<std::string> splitV;
    while(getline(std::cin, s))
    {
        splitV = split(s);
        vcout(splitV);
    };

    return 0;
}

void vcout(const std::vector<std::string>& v)
{
    for(std::vector<std::string>std::const_iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
}
