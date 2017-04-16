template<class Ran, class X>
bool binary_search(Ran begin, Ran end, const X& x)
{
    while (begin < end)
    {
        //find midpoint
        Ran mid = begin + (end- begin) / 2;
        //see which part contains x
        if (x < *mid)
            end = mid;
        else if (x > *mid)
            begin = mid + 1;
        else
            return true;
    }
    return false;
}
