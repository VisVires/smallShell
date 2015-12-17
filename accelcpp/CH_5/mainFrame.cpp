#include<vector>
#include<string>
#include<iostream>

#include "frames.h"

using std::string;      using std::vector;
using std::cout;        using std::cin;
using std::endl;        using std::istream;

vector<string> read(istream&, string&);
void output(vector<string>& out);

int main()
{
    string s;
    vector<string> words;
    //get user input
    cout << "Please enter the phrase you'd like to frame: " << endl;
    words = read(cin, s);
    //frame user input
    vector<string>centered = center(words);
    vector<string>framed = frame(words, "left");

    //output framed input
    vector<string> cat = hcat(centered, framed);
    output(cat);
    output(framed);
    output(centered);

    return 0;
}

vector<string> read(istream& in, string& s)
{
    vector<string> ret;
    while(in>>s)
    {
        ret.push_back(s);
    }

    return ret;
}

void output(vector<string>& out)
{
        for(vector<string>::size_type i = 0; i != out.size(); ++i)
        {
            cout << out[i] << endl;
        }
}
