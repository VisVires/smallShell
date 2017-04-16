#include "Student_info.h"

using std::istream;
using std::vector;

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

std::istream& read(std::istream& is, Student_info& s)
{
    //read and store the students name and midterm and final exam grades
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);
    return is;
}

std::istream& read_hw(std::istream& in, std::vector<double>& hw)
{
    if(in)
    {   //get rid of previous contents
        hw.clear();

        //read hw grades
        double x;
        while (in >> x)
            hw.push_back(x);

        in.clear();
    }
    return in;
}
