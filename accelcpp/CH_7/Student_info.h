#ifndef STUDENT_INFO_H_INCLUDED
#define STUDENT_INFO_H_INCLUDED

#include<iostream>
#include<vector>
#include<string>

struct Student_info{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
#endif // STUDENT_INFO_H_INCLUDED
