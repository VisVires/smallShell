#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <sstream>

using std::vector;      using std::cout;
using std::cin;         using std::endl;
using std::setw;        using std::string;
using std::ostringstream;

const vector<double> square(const vector<double>);
void outputSquares(const vector<double>, const vector<double>);
int longestNum(const vector<double>);

int main()
{
    //declare vector
    vector<double> nums;
    vector<double> squares;
    int n = 1;
    for(int i = 0; i != 100; ++i)
    {
        nums.push_back(n);
        n++;
    }

    squares = square(nums);
    outputSquares(nums, squares);
    return 0;
}

const vector<double> square(const vector<double> n)
{
    vector<double> squares;
    for(vector<double>::size_type i = 0; i < n.size(); ++i)
    {
        double square = pow(n[i], 2);
        squares.push_back(square);
    }

    return squares;
}

void outputSquares(const vector<double> nums, const vector<double> squares)
{
    int cw = longestNum(squares);
    for(vector<double>::size_type i = 0; i < nums.size(); ++i)
    {
            cout << "Number: " << std::setprecision(2) << std::fixed << setw(cw + 2) <<nums[i];
            cout << " Square: "<< std::setprecision(2) << std::fixed << setw(cw + 2) <<squares[i] << endl;
    }
}

int longestNum(const vector<double> squares)
{
    int longest = 1;
    double last;
    string large;


    typedef vector<double>::size_type vec_sz;
    vec_sz size = squares.size();
    last = squares[size -1];

    ostringstream ostr;
    ostr << last;
    large = ostr.str();
    longest = large.length();

    return longest;
}
