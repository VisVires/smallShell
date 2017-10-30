#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::endl;        using std::cin;
using std::vector;      using std::cout;
using std::sort;
using std::string;

void wordCount(const vector<string>&);

int main()
{
    string word;
    vector<string>words;
    cout << "Please enter a phrase and I will count the words" << endl;
    while (cin >> word)
        words.push_back(word);

    const vector<string>& w = words;
    wordCount(w);

    string longest;
    string shortest;
    int sLength = 0;

    for (vector<string>::size_type i = 0; i < w.size(); ++i)
    {
        if (w[i].length() > sLength)
        {
            longest = w[i];
        }
    }

    for (vector<string>::size_type i = 0; i < w.size(); ++i)
    {
        if(w[i].length() < longest.length())
        {
            shortest = w[i];
        }
    }

    cout << "Longest word is: " << longest << endl;
    cout << "Shortest word is: " << shortest << endl;
    return 0;
}

void wordCount(const vector<string>& w)
{
    for (vector<string>::size_type i = 0; i < w.size(); ++i)
    {
        int wCount = 0;
        for (vector<string>::size_type j = 0; j < w.size(); ++j)
        {
            if (w[i] == w[j])
            {
                wCount++;
            }
        }
        cout << w[i] << ": " << wCount << endl;
    }
}




