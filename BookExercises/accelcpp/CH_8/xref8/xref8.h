#ifndef XREF8_H_INCLUDED
#define XREF8_H_INCLUDED

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "split_8.h"

template <typename OutIter>
OutIter xref(std::istream& in, OutIter out, std::vector<std::string> find_words(const std::string&) = split);
#endif // XREF7_H_INCLUDED
