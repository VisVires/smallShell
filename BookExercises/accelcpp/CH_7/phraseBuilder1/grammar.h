#ifndef GRAMMAR_H_INCLUDED
#define GRAMMAR_H_INCLUDED

#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <map>
#include <stdexcept>
#include <cstdlib>
#include "split_6.h"

typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;

Grammar read_grammar(std::istream&);
std::vector<std::string> gen_sentence(const Grammar& g);
bool bracketed(const std::string &s);
void gen_aux(const Grammar&, const std::string&, std::vector<std::string>&);
int nrand(int n);

#endif // GRAMMAR_H_INCLUDED
