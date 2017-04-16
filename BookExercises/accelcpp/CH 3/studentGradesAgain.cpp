#include <iomanip>
#include <iostream>
#include <string>
#include <ios>

using std::cin;     using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;

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

    //the number and sum of grades so far
    int count = 0;
    double sum = 0.0;

    //a variable into which to read
    double x;
    while (count == 0)
    {
         //ask for and read hw grades
        cout << "Enter all of the homework grades followed by any non-numeric character: ";
        while (cin >> x)
        {
            ++count;
            sum += x;
        }
        cin.clear();
        cin.ignore();
        cout << "You have to enter homework grades" << endl;
    }

     //set precision to previous value
     //write result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + .4 * final + .4 * sum/count
        << setprecision(prec) << endl;
        //reset precision
    return 0;
}
