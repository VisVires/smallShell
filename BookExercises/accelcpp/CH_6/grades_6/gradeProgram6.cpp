#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"
#include "analysis.h"

using std::cin;             using std::setprecision;
using std::cout;            using std::sort;
using std::endl;            using std::streamsize;
using std::string;          using std::vector;
using std::domain_error;    using std::max;

vector<Student_info> extract_fails(vector<Student_info>& students);
bool fgrade(const Student_info& s);
bool pgrade(const Student_info& s);

int main()
{
    vector<Student_info> did, didnt;
    Student_info student;

    //read and store all student data
    while (read(cin, student))
    {
        if(did_all_hw(student))
            did.push_back(student);
        else
            didnt.push_back(student);
    }

    if(did.empty())
    {
        cout << "No student did their homework" << endl;
        return 1;
    }

    if(didnt.empty())
    {
        cout << "Every student did all the homework!";
        return 1;
    }

    write_analysis(cout, "median",  grade_aux, did, didnt);
    write_analysis(cout, "average", average_grade, did, didnt);
    write_analysis(cout, "median of homework turned in", optimistic_median, did, didnt);

    return 0;
}

vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), pgrade);
    vector<Student_info> fail(iter, students.end());
    students.erase(iter, students.end());

    return fail;
}

vector<Student_info> extract_didnt(vector<Student_info>& student)
{
    vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), did_all_hw)
    vector<Student_info> didnt(iter, students.end());
    students.erase(iter, students.end());

    return didnt;
}

bool pgrade(const Student_info& s)
{
    return !fgrade(s);
}

//determine whether student has a failing grade
bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}
