#include "xref7.h"

using std::map;     using std::iterator;
using std::string;  using std::vector;
using std::istream;

map<string, vector<int> > xref(istream& in, vector<string>find_words(const string&)/* = split*/)
{
    string line;
    int line_num = 0;

    map<string, vector<int> > ret;

    while(getline(in, line))
    {
        ++line_num;

        vector<string> words = find_words(line);

        for (vector<string>::const_iterator it = words.begin(); it != words.end(); ++it)
        {
            ret[*it].push_back(line_num);
        }
    }
    return ret;
}
