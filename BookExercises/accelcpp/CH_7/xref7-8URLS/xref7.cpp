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

        vector<string> url = find_urls(line);

        for (vector<string>::const_iterator it = url.begin(); it != url.end(); ++it)
        {
            ret[*it].push_back(line_num);
        }
    }
    return ret;
}
