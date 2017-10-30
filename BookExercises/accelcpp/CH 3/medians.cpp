#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using std::endl;        using std::cin;
using std::vector;      using std::cout;
using std::sort;
using std::string;

int main()
{
    //get numbers
    cout << "Please input numbers which will be sorted into quatriles entry will stop at "
        "first non- numeric input: ";
    int x;
    vector<int> numbers;
    while (cin >> x)
        numbers.push_back(x);

    //define size
    typedef vector<int>::size_type vec_sz;
    vec_sz size = numbers.size();

    //define quatrile size
    const double vec_quaSize = (double)size/4;

    //sort number
    sort(numbers.begin(), numbers.end());

    int quatrile = 1;
    int n = size - 1;
    while (n > 0)
    {
        if(quatrile != 5)
        {
            //output quatrile
            cout << "Quatrile Number: " << quatrile << endl;
            int i = 0;
            while(i != ceil(vec_quaSize) && n != 0)
            {
                //output numbers
                cout << numbers[n] << endl;
                //increment numbers
                --n;
                //increment through quatrile;
                ++i;
            }
            ++quatrile;
        }
        else
        {
            cout << numbers[n] << endl;
            --n;
        }
    }
    return 0;
}
