#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
#include <vector>

using std::cout;    using std::setprecision;
using std::cin;     using std::streamsize;
using std::endl;    using std::string;
using std::vector;

double grade(double midterm, double final, double average)
{
    return .2 * midterm + .4 * final + 4 * average;
}


int main()
{
    int count = 0;
    double sum = 0;
    vector <double> homework;
    double x,final, midterm;

    cout << "Please enter your midterm and final grades: ";
    cin >> midterm >> final;

    cout << "Enter all your homework grades followed by"
            "end of file: ";
    while(cin >> x)
    {
        ++count;
        sum += x;
        homework.push_back(x);
    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();

    if(size == 0)
    {
        cout << endl << "You must enter a grade. "
                        "Please try again." << endl;
        return 1;
    }

    streamsize prec = cout.precision();
    cout    << "Your final grade is " << setprecision(3)
            << grade(midterm, final, sum/count)
            << setprecision(prec) << endl;

return 0;
}




