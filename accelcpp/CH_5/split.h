#ifndef SPLIT_H_INCLUDED
#define SPLIT_H_INCLUDED

#include <vector>
#include <string>
#include <iostream>
#include <cctype>
#include <iterator>

std::vector<std::string>split (const std::string& s);
std::vector<std::string>sort_lower(const std::vector<std::string>&);
bool hasUpper(const std::string&);
bool isPalin(const std::string&);
std::vector<std::string> palidromes(const std::vector<std::string>&);

#endif // SPLIT_H_INCLUDED
