#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;     using std::sort;
using std::cout;    using std::streamsize;
using std::endl;    using std::string;
using std::vector;  using std::setprecision;

int main()
{
    //ask for students name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    //ask for and read the midterm and final grades;
    double midterm, final;
    cout << "Enter midterm and final exam grades: ";
    cin >> midterm >> final;

    //ask for and read hw grades
    cout << "Enter all of the homework grades followed by any non-numeric character: ";
    vector<double> homework;
    double x;
    while (cin >> x)
        homework.push_back(x);

    //check that some homework grades were entered
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size == 0)
    {
        cout << endl << "You must enter your grades.   "
                        "Please try again" << endl;
        return 1;
    }
    //find median
    sort(homework.begin(), homework.end());
    vec_sz mid = size/2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
                           :homework[mid];

    //compute and write the final grade
    //set precision to previous value
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + .4 * final + .4 * median
        << setprecision(prec) << endl;
        //reset precision
    return 0;
}
