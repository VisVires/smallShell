#ifndef URL_SEARCH_H_INCLUDED
#define URL_SEARCH_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cctype>
#include <algorithm>

std::vector<std::string> find_urls(const std::string& s);
std::string::const_iterator url_end(std::string::const_iterator b, std::string::const_iterator e);
bool not_url_char(char c);
std::string::const_iterator url_beg(std::string::const_iterator b, std::string::const_iterator e);


#endif // URL_SEARCH_H_INCLUDED
