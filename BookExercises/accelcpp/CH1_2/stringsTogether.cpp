#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::max;


string::size_type width(const vector<string>& v);
vector<string> frame(const vector<string>& v);
//vector<string> border(int, const char&);
vector <string> vcat(const vector<string>& top, const vector<string>& bottom);
vector<string> split(const string& s);

int main()
{
    string s;
    vector<string> v;
    while(getline(cin, s))
        v = split(s);

    vector<string>outSide = frame(v);

    for(vector<string>::size_type i = 0; i != outSide.size(); ++i)
        cout<< outSide[i] << endl;

return 0;
}


string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
    {
        maxlen = max(maxlen, v[i].size());
    }
    return maxlen;
}

vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');
    cout << "in the frame" << endl;
    //write top border
    ret.push_back(border);

    //write outside borders
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
    {
        ret.push_back("*" + v[i] + string(maxlen - v[i].size(), ' ') + " *");
    }

    //write bottom border
    ret.push_back(border);
    //return borders
    return ret;
}

vector <string> vcat(const vector<string>& top, const vector<string>& bottom)
{
    vector<string> ret = top;

    for(vector<string>::const_iterator it = bottom.begin(); it != bottom.end(); ++it)
    {
        ret.push_back(*it);
    }

    return ret;
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
