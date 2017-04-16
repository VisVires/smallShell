#ifndef CONCAT_H_INCLUDED
#define CONCAT_H_INCLUDED

#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

std::vector<std::string> vcat (const std::vector<std::string>& top, const std::vector<std::string>& bottom);

std::vector<std::string>hcat(const std::vector<std::string>& left, const std::vector<std::string>& right);

std::string::size_type width(const std::vector<std::string>&);

#endif // CONCAT_H_INCLUDED
