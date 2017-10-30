#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using std::vector;      using std::cout;
using std::istream;     using std::endl;
using std::string;      using std::setw;
using std::cin;         using std::left;

istream& read_words(istream& , vector<string>&);
int countWords(const vector<string>&);
vector<int>countOccurance(const vector<string>&);

int main()
{
    vector<string> words;
    read_words(cin, words);

    int numWords = countWords(words);
    cout << "There are " << numWords << " words in the input" << endl;

    vector<int>occur = countOccurance(words);

    for(int i = 0; i < words.size(); ++i)
    {
        cout << "Word: " << setw(10) << left << words[i] << " Occurance: " << setw(10) << left << occur[i] << endl;
    }

    return 0;
}

istream& read_words(istream& in, vector<string>& words)
{
    if(in)
    {
        //if the vector isn't clear, clear it
        words.clear();
        string word;
        //add word to vector
        while (in >> word)
            words.push_back(word);
        //clear buffer
        in.clear();
    }
    return in;
}

vector<int> countOccurance(const vector<string>& w)
{
    vector<int> num;

    for(vector<string>::size_type i = 0; i != w.size(); ++i)
    {
        int occur = 0;
        for(vector<string>::size_type j = 0; j != w.size(); ++j)
        {
            if(w[i] == w[j])
                occur++;
        }
        num.push_back(occur);
    }
    return num;
}

int countWords(const vector<string>& w)
{
    int vec_sz = w.size();
    return vec_sz;
}
