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
        //store words in
        vector<string> entry = split(line);
        if(!entry.empty())
        {
            ret[entry[0]].push_back(Rule(entry.begin() + 1, entry.end()));
        }
    }
    return ret;
}

/*
Checks if phrase is bracketed
*/
vector<string> gen_sentence(const Grammar& g)
{
    vector<string> ret;
    gen_aux(g, "<sentence>", ret);
    return ret;
}

/*
Checks if phrase is bracketed
*/
bool bracketed(const string &s)
{
    //check if first and last char are <> respectively
    return s.size() > 1 && s[0] == '<' && s[s.size() - 1] == '>';
}

void gen_aux(const Grammar &g, const string& word, vector<string>& ret)
{
    if(!bracketed(word))
    {
        ret.push_back(word);
    }
    else
    {
        //locate rule that matches word
        Grammar::const_iterator it = g.find(word);
        if (it == g.end())
            throw logic_error("empty rule");
        //fetch set of possible rules
        const Rule_collection& c = it->second;
        //select one at random
        const Rule& r = c[nrand(c.size())];
        //recursively expand the rule
        for (Rule::const_iterator i = r.begin(); i != r.end(); ++i)
            gen_aux(g, *i, ret);
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
