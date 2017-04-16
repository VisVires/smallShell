#include "grammar.h"

using std::string;      using std::iterator;
using std::istream;     using std::logic_error;
using std::vector;      using std::domain_error;


/*
read input from user
*/
Grammar read_grammar(istream &in)
{
    Grammar ret;
    string line;

    //read the input
    while(getline(in, line))
    {
        //split and store words in entry
        vector<string> entry = split(line);
        vector<string>::const_iterator iter = entry.begin();
        //if words are entered in empty add to map
        if(!entry.empty())
        {
            //add rule as key then push back the rest of the statement as the value on map
            ret[*iter].push_back(Rule(entry.begin() + 1, entry.end()));
        }
    }
    //return map
    return ret;
}

/*
Builds sentence using rules
*/
vector<string> gen_sentence(const Grammar& g)
{
    vector<string> sentence;
    vector<string> tokens;
    //place at top of stack
    tokens.push_back("<sentence>");

    //if tokens is not empty save token and pop back
    while(!tokens.empty())
    {
        string token = tokens.back();
        tokens.pop_back();
        gen_aux(g, token, sentence, tokens);
    }
    return sentence;
}

/*
Checks if phrase is bracketed
*/
bool bracketed(const string &s)
{
    //check if first and last char are <> respectively
    return s.size() > 1 && s[0] == '<' && s[s.size() - 1] == '>';
}


void gen_aux(const Grammar &g, const string& token, vector<string>& sentence, vector<string>& tokens)
{
    //if word is not bracketed place on vector of strings
    if(!bracketed(word))
    {
        sentence.push_back(word);
    }
    else
    {
        //locate rule that matches bracketed word
        Grammar::const_iterator it = g.find(word);
        //if no value exists output empty rule error
        if (it == g.end())
            throw logic_error("empty rule");
        //fetch set from possible rules
        const Rule_collection& c = it->second;
        //select one at random from rule collection
        const Rule& r = c[nrand(c.size())];
        //recursively expand the rule
        for (Rule::const_reverse_iterator i = r.rbegin(); i != r.rend(); ++i)
            tokens.push_back(*i);
    }
}

int nrand(int n)
{
    if(n <= 0 || n > RAND_MAX)
        throw domain_error("Argument to nrand is out of range");

    const int bucket_size = RAND_MAX / n;
    int r;

    do r = rand() / bucket_size;
    while(r >= n);

    return r;
}
