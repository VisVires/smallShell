#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdexcept>

using std::cout;        using std::cin;
using std::endl;        using std::vector;
using std::istream;     using std::setprecision;
using std::fixed;       using std::domain_error;

istream& read_nums(istream&, vector<double>&);
double average(const vector<double>&);

int main()
{
    vector<double>nums;
    double ave;
    cout << "Please enter the numbers to be averaged: ";
    //read numbers from input
    read_nums(cin, nums);


    try
    {
        ave = average(nums);
        int prec = cout.precision();
        cout << "The average of the numbers entered is: " << setprecision(2) << fixed << ave << setprecision(prec) << endl;
    }
    catch(domain_error e)
    {
        cout << e.what() << endl;
    }

    return 0;
}

istream& read_nums(istream& in, vector<double>& n)
{
    if(in)
    {
        //clear vector if not cleared
        n.clear();

        double num;
        while(in >> num)
            n.push_back(num);

        in.clear();
    }
    return in;
}

double average(const vector<double>& n)
{
    double ave;
    double sum = 0;
    typedef vector<double>::size_type vec_size;
    vec_size size = n.size();

    if(n.size() == 0)
        throw domain_error("Vector is empty");

    for(vector<double>::size_type i = 0; i != n.size(); ++i)
    {
        sum += n[i];
    }

    ave = sum/size;

    return ave;
}
