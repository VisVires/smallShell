#include "student_info.h"

using std::istream;
using std::domain_error;

Student_info::Student_info(): midterm(0), final(0){}
Student_info::Student_info(istream& is){read(is);}

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

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name() < y.name();
}

istream& Student_info::read(istream& in)
{
    in >> n >> midterm >> final;
    read_hw(in, homework);
    g = grade(midterm, final, homework);
    return in;
}

double Student_info::grade()const
{
    return g;
}

double Student_info::grade(double midterm, double final, double homework)
{
    return .2 * midterm + .4 * final + .4 * homework;
}

double Student_info::grade(double midterm, double final, const std::vector<double>& hw)
{
    if(hw.size() == 0)
        throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw));
}
