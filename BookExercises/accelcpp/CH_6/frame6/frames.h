#ifndef FRAMES_H_INCLUDED
#define FRAMES_H_INCLUDED

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>


std::string::size_type width(const std::vector<std::string>& v);
std::vector<std::string> frame(const std::vector<std::string>& v);
std::vector<std::string> vcat(const std::vector<std::string>& top, const std::vector<std::string>& bottom);
std::vector<std::string>hcat(const std::vector<std::string>& left, const std::vector<std::string>& right);
std::vector<std::string> center(const std::vector<std::string>&);
std::string border(std::string, std::string::size_type w);

#endif // FRAMES_H_INCLUDED
