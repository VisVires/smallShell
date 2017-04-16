#ifndef ANALYSIS_H_INCLUDED
#define ANALYSIS_H_INCLUDED

#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include "median.h"
#include "grade.h"
#include <exception>

double median_analysis(const std::vector<Student_info>& students);
double analysis(const std::vector<Student_info>&, double do_analysis(const Student_info&));
double do_analysis(const Student_info& s);
double average_analysis(const std::vector<Student_info>&);
double optimistic_median_analysis(const std::vector<Student_info>&);
double optimistic_median(const Student_info&);
double average(const std::vector<Student_info>&);
double grade_aux(const Student_info&);
double average_grade(const Student_info&);
void write_analysis(std::ostream&, const std::string& name, double analysis(std::vector<Student_info>& students,(double do_analysis(const Student_info& s)))
                                                                            , const std::vector<Student_info>& did, const std::vector<Student_info>& didnt);


#endif // ANALYSIS_H_INCLUDED
