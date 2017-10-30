#include "split.h"

using std::vector;      using std::string;
using std::isspace;     using std::iterator;
using std::isupper;

vector<string>split (const string& s)
{
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;

    while(i != s.size())
    {
        while(i != s.size() && isspace(s[i]))
            ++i;

        string_size j = i;

        while (j != s.size() && !isspace(s[j]))
            j++;

        if(i != j)
        {
            ret.push_back(s.substr(i, j-i));
            i = j;
        }
    }
    return ret;
}

vector<string> sort_lower(const vector<string>& s)
{
    vector<string>::size_type v_size;
    //get starting size of vector
    v_size = s.size();
    vector<string> lower;
    //iterate through vector moving lower to new vector
    for(vector<string>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
    {
        if(!hasUpper(*iter))
            lower.push_back(*iter);
    }
    //move through and place upper at end
    for(vector<string>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
    {
        if(hasUpper(*iter))
            lower.push_back(*iter);
    }
    return lower;
}

vector<string> palidromes(const vector<string>& s)
{
    vector<string> palin;
    for(vector<string>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
    {
        if(isPalin(*iter))
            palin.push_back(*iter);
    }
    return palin;
}

bool hasUpper(const string& s)
{
    for(string::size_type i = 0; i != s.size(); ++i)
    {
        if(isupper(s[i]))
            return true;
    }
    return false;
}

bool isPalin(const string& s)
{
    string::size_type j = s.size() - 1;
    string::size_type i = 0;

    if(s.size() == 1)
    {
        return false;
    }

    while(i != s.size())
    {
        if(s[i] != s[j])
            return false;
        ++i;
        --j;
    }
    return true;
}
