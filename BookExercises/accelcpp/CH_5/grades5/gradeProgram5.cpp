#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <list>
#include "grade.h"
#include "Student_info.h"

using std::cin;             using std::setprecision;
using std::cout;            using std::sort;
using std::endl;            using std::streamsize;
using std::string;          using std::list;
using std::domain_error;    using std::max;

list<Student_info> extract_fails(list<Student_info>& students);
bool fgrade(const Student_info& s);

int main()
{
    list<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0; //length of longest name

    //read and store all student data
    while (read(cin, record))
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }
    //alphabetize
    students.sort(compare);

    //write names and grades
    for(list<Student_info>::const_iterator iter = students.begin(); iter != students.end(); ++iter)
    {
        //write the name padded on the right to maxlen + 1 characters
        cout << iter->name << string(maxlen + 1 - iter->name.size(), ' ');

        //compute and write the grade
        try
        {
            double final_grade = grade(*iter);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        }
        catch (domain_error e)
        {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}

list<Student_info> extract_fails(list<Student_info>& students)
{

    list<Student_info> fail;
    //set iterator to beginning
    list<Student_info>::iterator iter = students.begin();
    list<Student_info>::size_type l_size;
    l_size = students.size();

    //until you reach end push failing students into fail vector and erase
    while(iter != students.end())
    {
        if(!fgrade(*iter))
        {
            students.insert(students.begin(), *iter);
            ++iter;
        }
        else
            fail.push_back(*iter);
    }
    students.resize(l_size);
    return fail;
}

//determine whether student has a failing grade
bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}
