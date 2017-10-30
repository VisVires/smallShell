#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

vector<string> split(const string& s);

int main()
{
    string s;
    while (getline(cin, s))
    {
        vector<string> v = split(s);

        for(vector<string>::size_type i = 0; i != v.size(); ++i)
            cout << v[i] << endl;
    }
return 0;
}


vector<string> split(const string& s)
{
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;

    //go to end of string
    while (i != s.size())
    {
        //place i at start of first word
        while (i != s.size() && isspace(s[i]))
        {
            ++i;
        }

        string_size j = i;
        //place j at end of first word
        while (j != s.size() && !isspace(s[j]))
        {
            j++;
        }
        //if not end of string add to vector
        if(i != j)
        {
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }
    return ret;
}
