#include "Student_info.h"


using std::istream;         using std::cout;
using std::list;            using std::cin;
using std::vector;          using std::string;
using std::domain_error;    using std::back_inserter;
using std::ostream;
using std::endl;

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

bool did_all_hw(const Student_info& s)
{
    return ((find(s.homework.begin(), s.homework.end(), 0)) == s.homework.end());
}


