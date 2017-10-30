#include "xref8.h"

using std::map;     using std::iterator;
using std::string;  using std::vector;
using std::istream;

template <typename OutIter>
OutIter xref(istream& in, OutIter out, vector<string> find_words(const string&) = split)
{
    string line;
    int line_num = 0;

    while(getline(in, line))
    {
        ++line_num;

        vector<string> words = find_words(line);

        for (vector<string>::const_iterator it= words.begin(); it != words.end(); ++it)
        {
            *out++ = std::make_pair(*it, line_num);
        }
    }
    return out;
}
