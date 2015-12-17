#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include "xref8.h"

using std::vector;  using std::cin;
using std::map;     using std::cout;
using std::endl;    using std::iterator;
using std::string;  using std::insert_iterator;


int main()
{
    map<string, int>ret;

    xref(cin, std::inserter(ret, ret.end()));

    //const string::size_type lineLength = 60;
    //write results
    for (map<string, int>::const_iterator it = ret.begin(); it != ret.end(); ++it)
    {
        //write word
        cout << it->first << " occurs on line(s): " << it->second << endl;
    }
    return 0;
}
