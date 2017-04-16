#include "frames.h"

using std::vector;          using std::cout;
using std::string;          using std::cin;
using std::endl;            using std::max;
using std::iterator;

string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;
    int buffer;

    cin.ignore();
    cin.clear();

    cout << "What size buffer would you like? ";
    cin >> buffer;

    for (vector<string>::size_type i = 0; i != v.size(); ++i)
    {
        maxlen = max(maxlen, v[i].size() + buffer);
    }
    return maxlen;
}



vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    string::size_type max_len = width(v);

    vector<string>::size_type words = v.size();

    typedef vector<string>::const_iterator iter;
    iter b = v.begin();
    iter e = v.end();
    iter word = b;

    //write top border
    ret.push_back(border("*", max_len + 4));

    while(word != e)
    {
        ret.push_back("* " + *word + string(max_len - word->size(), ' ') + " *");
        ++word;
    }
    //write bottom border
    ret.push_back(border("*", max_len + 4));

    return ret;
}



vector<string> vcat (const vector<string>& top, const vector<string>& bottom)
{
    //copy top picture
    vector<string> ret = top;

    //copy bottom
    for(vector<string>::const_iterator it = bottom.begin(); it != bottom.end(); ++it)
    {
        ret.push_back(*it);
    }
    return ret;
}



vector<string>hcat(const vector<string>& left, const vector<string>& right)
{
    vector<string>ret;

    //add 1 to leave a space between pics
    string::size_type width1 = width(left) + 1;

    //indices to look at elements from l to r
    typedef vector<string>::const_iterator iter;

    iter lb = left.begin();
    iter rb = right.begin();
    iter le = left.end();
    iter re = right.end();
    iter i = lb;
    iter j = rb;
    //continue until we've seen all rows from both pics

    while (i != le || j != re)
    {
        //construct new string to hold characters
        string s;
        //copy a row from left-hand side, if there is one
        if(i != le)
            s = *i;

        //pad to full width
        s += string(width1 - s.size(), ' ');

        //copy a row from the right hand side
        if (j != re)
            s += *j;

        //add s to picture we're creating
        ret.push_back(s);
        ++i;
        ++j;
    }
    return ret;
}

vector<string> center(const vector<string>&s)
{
    vector<string> ret = frame(s);
    return ret;
}


string border(string s, string::size_type w)
{
    string fBorder;
    string::size_type i = 0;

    while(i != w)
    {
        fBorder += s;
        i++;
    }
    return fBorder;
}
