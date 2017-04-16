#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include "grade.h"
#include "Student_info.h"

using std::cin;             using std::setprecision;
using std::cout;            using std::sort;
using std::endl;            using std::streamsize;
using std::string;          using std::vector;
using std::domain_error;    using std::max;
using std::iterator;        using std::map;

string letter_grade(double& grade);

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0; //length of longest name

    //read and store all student data
    while (read(cin, record))
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }
    //alphabetize
    sort(students.begin(), students.end(), compare);
    //map to hold count
    map<string, int> gradeCounter;
    //write names and grades
    for(vector<Student_info>::size_type i = 0; i < students.size(); ++i)
    {
        //write the name padded on the right to maxlen + 1 characters
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');

        //compute and write the grade
        try
        {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
            cout << "\t" << letter_grade(final_grade);
            ++gradeCounter[letter_grade(final_grade)];
        }
        catch (domain_error e)
        {
            cout << e.what();
        }
        cout << endl;
    }

    cout << "Frequencies of each grade" << endl;
    for(map<string, int>::const_iterator it = gradeCounter.begin(); it != gradeCounter.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }
    return 0;
}

string letter_grade(double& grade)
{
    string letter_grade;
    if (grade >= 90)
        letter_grade = "A";
    else if (grade >= 80)
        letter_grade = "B";
    else if (grade >= 70)
        letter_grade = "C";
    else if (grade >= 60)
        letter_grade = "D";
    else
        letter_grade = "F";

    return letter_grade;
}
