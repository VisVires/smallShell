#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <list>
#include "grammar.h"

using std::string;      using std::cout;
using std::vector;      using std::endl;
using std::cin;         using std::iterator;
using std::vector;

int main()
{

    Grammar gram = read_grammar(cin);
    for(int i = 0; i < 5; i++)
    {
        vector<string> sentence = gen_sentence(gram);
        //write the first word if any
        vector<string>::const_iterator it = sentence.begin();
            if(!sentence.empty())
            {
                cout << *it;
                ++it;
            }
        //write the rest of the words
            while (it != sentence.end())
            {
                cout << " " << *it;
                ++it;
            }
            cout << endl;
    }
    return 0;
}
