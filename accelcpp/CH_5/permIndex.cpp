#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include <iterator>
#include "split.h"
#include "concat.h"

using std::cout;
using std::cin;         using std::vector;
using std::endl;        using std::string;

vector<string> rotatePhrase(vector<string>&, unsigned int i);

int main()
{
    string s;
    vector<string> phrase;
    //get phrase from user
    cout << "Please enter a phrase you would like to be made into a permuted index: ";
    while (getline(cin, s))
            phrase = split(s);

    const string beg = *phrase.begin();
    const string e = *phrase.end();
    //get the length of the phrase
    string::size_type numWords = phrase.size();
    unsigned int index = 0;
    //rotate phrase
    vector<vector<string> >rotated;
    while(index != numWords)
    {
       rotatePhrase(phrase, index);
        ++index;
    }
    //sort rotations
    //unrotate and write index

    return 0;
}

vector<string> rotatePhrase(vector<string>& s, unsigned int i)
{
    //set output container
    vector<string> ret;
    //insert elements in range in the beginning
    vector<string>::iterator iter = s.begin() + i;
    //copy values starting at iter
    while (iter != s.end())
    {
        ret.push_back(*iter);
        ++iter;
    }
    //insert remaining values to end
    ret.insert(ret.end(), s.begin(), s.begin()+ i);
    /*//Test
    vector<string>::iterator it = ret.begin();
    while (it != ret.end())
    {
        cout << *it + ' ';
        ++it;
    }
    cout << endl;*/
    return ret;
}

