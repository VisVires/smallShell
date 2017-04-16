#include "analysis.h"

using std::vector;          using std::string;
using std::domain_error;    using std::back_inserter;
using std::ostream;
using std::endl;

//get median
double median_analysis(const vector<Student_info>& students)
{
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
    return median(grades);
}


//check if divide by zero occurs
double grade_aux(const Student_info& s)
{
    try
    {
        return grade(s);
    }
    catch(domain_error)
    {
        return grade(s.midterm, s.final, 0);
    }
}

//calc average of vector
double average(const vector<double> &v)
{
    return (accumulate(v.begin(), v.end(), 0.0)/ v.size());
}

//calc average grade of all grades
double average_grade(const Student_info& s)
{
    return grade(s.midterm, s.final, average(s.homework));
}

//output
double average_analysis(const vector<Student_info>& students)
{
    vector<double>grades;

    transform(students.begin(), students.end(), back_inserter(grades), average_grade);
    return median(grades);
}

//output results of each analysis
void write_analysis(ostream& out, const string& name,
                    double analysis(const vector<Student_info>& students, (double do_analysis(const Student_info&))),
                    const vector<Student_info>& did, const vector<Student_info>& didnt)
{
    out << name << " : median(did) = " << analysis(did, do_analysis) << ", median(didnt) = " << analysis(didnt, do_analysis) << endl;
}

double optimistic_median(const Student_info& s)
{
    vector<double> nonzero;
    remove_copy(s.homework.begin(), s.homework.end(), back_inserter(nonzero), 0);
    if(nonzero.empty())
        return grade(s.midterm, s.final, 0);
    else
        return grade(s.midterm, s.final, median(nonzero));
}

//analyis for optimistic median
double optimistic_median_analysis(const vector<Student_info>& students)
{
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), optimistic_median);
    return median(grades);
}

double analysis(const std::vector<Student_info>&students, double do_analysis(const Student_info& s))
{
    vector<double>grades;
    transform(students.begin(), students.end(), back_inserter(grades), do_analysis);
    return median(grades);
}


double do_analysis(const Student_info &s)
{

}
