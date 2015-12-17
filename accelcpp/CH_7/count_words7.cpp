#include <iostream>
#include <string>
#include <iterator>
#include <map>
#include <vector>

using std::string;      using std::endl;
using std::cin;         using std::iterator;
using std::cout;        using std::map;
using std::vector;

void mapOutput(const map<string, int>&);

int main()
{
    string s;
    map<string, int> counters;
    map<int, vector<string> > wordsByFreq;
    while(cin >> s)
    {
        ++counters[s];
    }
    //put words back new map with int key
    for (map<string, int>::const_iterator it = counters.begin(); it != counters.end(); ++it)
    {
        wordsByFreq[it->second].push_back(it->first);
    }

    //output map based on frequency, first output frequency then words
    for (map<int, vector<string> >::const_iterator i = wordsByFreq.begin(); i != wordsByFreq.end(); ++i)
    {
        cout << "\nFrequency: " << i->first << endl;

        for (vector<string>::const_iterator j = i->second.begin(); j != i->second.end(); ++j)
            cout << *j << endl;
    }
    return 0;
}



