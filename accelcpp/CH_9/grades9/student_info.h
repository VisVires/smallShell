#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "grade.h"
#include "median.h"

class Student_info
{
    public:
        Student_info();
        Student_info(std::istream&);
        double grade () const;
        double grade(double midterm, double final, double homework);
        double grade(double, double, const std::vector<double>&);
        std::istream& read(std::istream&);
        std::string name() const {return n;}
        bool valid() const {return !homework.empty();}

    private:
        std::string n;
        double midterm, final;
        double g;
        std::vector<double> homework;
};

bool compare(const Student_info& x, const Student_info& y);
std::istream& read_hw(std::istream& in, std::vector<double>& hw);

#endif // STUDENT_INFO_H
