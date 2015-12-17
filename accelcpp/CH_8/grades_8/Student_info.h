#ifndef STUDENT_INFO_H_INCLUDED
#define STUDENT_INFO_H_INCLUDED

#include<iostream>
#include<list>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include "median.h"
#include "grade.h"
#include <exception>


struct Student_info{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
bool did_all_hw(const Student_info& s);



#endif // STUDENT_INFO_H_INCLUDED
