#include <iostream>
#include <vector>
#include <iterator>
#include <stdexcept>
#include <algorithm>

using std::vector;
using std::domain_error;
using std::iterator;

template<class ForwardIterator, class OutputIterator>
OutputIterator median(ForwardIterator beg, ForwardIterator e, OutputIterator out);

int main()
{
    double number = 1;
    vector<double> nums;

    while(number != 10)
    {
        nums.push_back(number);
        number++;
    }

    vector<double>::iterator iter;
    double med;
    med = median(nums.begin(), nums.end(), med);

    std::cout << med;

    return 0;
}

template<class ForwardIterator, class OutputIterator>
OutputIterator median(ForwardIterator beg, ForwardIterator e, OutputIterator out)
{
    if (beg == e)
        throw domain_error("median of an empty vector");

    OutputIterator cSize = distance(beg, e);

    sort(beg, e);

    OutputIterator mid = cSize/2;

    (int)cSize%2 == 0 ? out = *(beg + mid) : out = (*(beg + mid) + *(beg + mid + 1))/2;

    return out;
}
