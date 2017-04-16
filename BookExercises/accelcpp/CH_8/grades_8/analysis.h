#ifndef ANALYSIS_H_INCLUDED
#define ANALYSIS_H_INCLUDED

#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iostream>
#include "median.h"
#include "grade.h"
#include <exception>


template<typename T> double analysisTemplate(const std::vector<Student_info>& students, T t);
template<typename T> void write_analysis(std::ostream& out, const std::string& name,double analysisTemplate(const std::vector<Student_info>& students, T t),const std::vector<Student_info>& did,const std::vector<Student_info>& didnt);

//double median_analysis(const std::vector<Student_info>& students);
double analysis(const std::vector<Student_info>&, double do_analysis(const Student_info&));
double do_analysis(const Student_info& s);
//double average_analysis(const std::vector<Student_info>&);
//double optimistic_median_analysis(const std::vector<Student_info>&);
double optimistic_median(const Student_info&);
double average(const std::vector<Student_info>&);
double grade_aux(const Student_info&);
double average_grade(const Student_info&);


#endif // ANALYSIS_H_INCLUDED
