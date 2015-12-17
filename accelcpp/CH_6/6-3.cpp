#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using std::cout;        using std::cin;
using std::endl;        using std::string;
using std::vector;      using std::iterator;
using std::transform;

void vcout(const vector<int>&);

int main()
{
    vector<int> u(10,100);

    vector<int> v;


    copy(u.begin(), u.end(), back_inserter(v));

    vcout(v);

    return 0;
}

void vcout(const vector<int>& v)
{
    for(vector<int>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << *iter << endl;
    }

}
