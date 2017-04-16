#include "split_6.h"

using std::string;      using std::cout;
using std::cin;         using std::endl;
using std::vector;      using std::iterator;
using std::find_if;

bool space(char c)
{
    return isspace(c);
}

bool not_space(char c)
{
    return !isspace(c);
}

vector<string> split(const string& str)
{
    typedef string::const_iterator iter;
    vector<string> ret;

    //set iterator to the beginning
    iter i = str.begin();
    //iterate until you reach end of string input
    while(i !=str.end())
    {
        //set i to next non-space character
        i = find_if(i, str.end(), not_space);

        //set j to next space character
        iter j = find_if(i, str.end(), space);

        //if not at end add string from i to j to vector ret
        if(i != str.end())
            ret.push_back(string(i,j));
        //assign i = to j
        i = j;
    }
    return ret;
}
