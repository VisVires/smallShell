#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::string;
using std::iterator;

bool space(char c)
{
    return isspace(c);
}

bool not_space(char c)
{
    return !isspace(c);
}


template<class Out>
void split(const string& str, Out os)
{
    typedef string::const_iterator iter;

    iter i = str.begin();
    while (i != str.end())
    {   //set i to first letter
        i = find_if(i, str.end(), not_space);
        //set j to first space
        iter j = find_if(i, str.end(), space);
        //add to os
        if (i != str.end())
            *os++ = string(i, j);

        i = j;
    }
}
