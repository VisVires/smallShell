#include <iostream>
#include <vector>
#include <string>
#include "algor.h"

template <class Beg, class End> bool equalMe(Beg beg1, End e ,Beg beg2);
template <class Input, class Type> Type findMe (Input, Input, Type);
template <class ForwardIterator, class OutputIterator> OutputIterator copyMe(ForwardIterator b,ForwardIterator e, OutputIterator out);
template<class ForwardIterator, class OutputIterator, class Pred> OutputIterator remove_copy_ifMe(ForwardIterator b,ForwardIterator e, OutputIterator out, Pred P);
template <class Input, class Dest, class Func> Dest transformMe(Input beg,Input e, Dest d, Func f);
template<class Input, class Type> Type accumulateMe(Input b ,Input e ,Type t);
template<class Input1, class Input2> Input2 searchMe(Input1 beg1, Input1 end1, Input2 beg2, Input2 end2);
template <class Input, class Pred> Input find_ifMe (Input beg, Input en, Pred p);
template<class ForwardIterator, class OutputIterator, class Type> OutputIterator remove_copyMe(ForwardIterator b,ForwardIterator e, OutputIterator out, Type t);
template<class ForwardIterator, class Type> ForwardIterator removeMe(ForwardIterator b,ForwardIterator e, Type t);
template<class ForwardIterator, class Pred> ForwardIterator remove_ifMe(ForwardIterator b,ForwardIterator e, Pred p);
template<class BiIterator, class Pred> BiIterator partitionMe(BiIterator b, BiIterator e, Pred p);

using std::vector;          using std::cout;
using std::iterator;        using std::endl;

int main()
{
    int num = 0;
    vector<int>v1;
    vector<int>v2;

    while (num != 10)
    {
            v1.push_back(num);
            num++;
    }

    int num2 = 4;
    while (num2 != 9)
    {
            v2.push_back(num2);
            num2++;
    }

    typedef vector<int>::iterator iter;

    iter b1 = v1.begin();
    iter e1 = v1.end();
    iter b2 = v2.begin();
    iter e2 = v2.end();

    if(equalMe(b1,e1,b2))
    {
        cout << "Vectors are equal" << endl;
    }
    else
        cout << "Vectors are not equal" << endl;

    cout << accumulateMe(b1,e1,num) << " worked" << endl;

    int num3 = 11;
    int me1 = findMe(b1, e1, num3);
    cout << "The number is " << me1 << endl;

    iter me = searchMe(b1,e1,b2,e2);
    if(me != e1)
    {
        cout << "Found the sequence it starts with " << *me << endl;
    }

    return 0;
}

/*Looks at values b->e and compares to values in d*/
template <class Beg, class End>
bool equalMe(Beg beg1,End e,Beg beg2)
{
    while(beg1 != e)
    {
        if(!(*beg1 == *beg2))
            return false;
        beg1++, beg2++;
    }
    return true;
}
/*Runs the function f on the elements in the range [b,e), storing the result in d
Applies an operation sequentially to the elements of one (1) or two (2) ranges and
stores the result in the range that begins at result.*/
template <class Input, class Dest, class Func>
Dest transformMe(Input beg, Input e, Dest d, Func f)
{
    while(beg != e)
    {
        *d = f(*beg);
        ++d;
        ++beg;
    }
    return d;
}
/* Creates a local variable and initializes it to a copy of t with same type as t, adds
each element in the range [b,e) to the variable and returns a copy of the variable as its
result*/
template<class Input, class Type>
Type accumulateMe(Input b ,Input e ,Type t)
{
    while(b != e)
    {
        t = t + *b;
        b++;
    }
    return t;
}

/*Each of the following three look for a given value in the sequence [b,e)*/
/*Looks for the value t*/
template <class Input, class Type>
Type findMe (Input beg, Input en, Type t)
{
    while (beg!= en)
    {
        if(t == *beg)
            return *beg;
        beg++;
    }
    return *en;
}
/*uses a search algorithm to for the sequence denoted by [b2, e2)*/
template<class Input1, class Input2>
Input2 searchMe(Input1 beg1, Input1 end1, Input2 beg2, Input2 end2)
{
    if (beg2 == end2)
        return beg1;
    while(beg1 != end1)
    {
        Input1 it1 = beg1;
        Input2 it2 = beg2;
        while(*it1 == *it2)
        {
            ++it1;
            ++it2;
            if(it2 == end2)
                return beg1;
            if(it1 == end1)
                return end1;
        }
        beg1++;
    }
    return end1;
}

/*tests each element against the predicate p Returns an iterator to the first element in the range [first,last)
for which pred returns true. If no such element is found, the function returns last.*/
template <class Input, class Pred>
Input find_ifMe (Input beg, Input en, Pred p)
{
    while (beg != en)
    {
        if (p(*beg))
        {
            return beg;
        }
        ++beg;
    }
    return en;
}

/*Algorithms to copy the sequence from [b,e) to the destination d*/
/*copies the entire sequence*/
template<class ForwardIterator, class OutputIterator>
OutputIterator copyMe(ForwardIterator b,ForwardIterator e, OutputIterator out)
{
    while (b!= e)
    {
        *out = b*
        ++b;
        ++out;
    }
    return out;
}


/*copies all elements not equal to t*/
/*Copies the elements in the range [first,last) to the range beginning at result,
except those elements that compare equal to val.*/
template<class ForwardIterator, class OutputIterator, class Type>
OutputIterator remove_copyMe(ForwardIterator b,ForwardIterator e, OutputIterator out, Type t)
{
    while (b!= e)
    {
        if (!(*b == t))
        {
            *out = *b;
        }
        ++b;
        ++out;
    }
    return out;
}

/*copies all elements where predicate p fails*/
template<class ForwardIterator, class OutputIterator, class Pred>
OutputIterator remove_copy_ifMe(ForwardIterator b,ForwardIterator e, OutputIterator out, Pred P)
{
    while (b!= e)
    {
        if (!(p(*b)))
        {
            *out = *b;
        }
        ++b;
        ++out;
    }
    return out;
}
/*Arranges the container so elements from [b,e) where predicate p is false are at the front of the range.
Returns an iterator denoting one past the range of these "unremoved" elements
*/
//remove_if(b,e,p);
template<class ForwardIterator, class Pred>
ForwardIterator remove_ifMe(ForwardIterator b,ForwardIterator e, Pred p)
{
    ForwardIterator b1 = b;
    while (b!= e)
    {
        if (!(p(*b)))
        {
            *b1 = *b;
            ++b1;
        }
        ++b;
    }
    return b1;
}
/*Tests which elements to keep against the value t

Transforms the range [first,last) into a range with all the elements that compare equal to val removed,
and returns an iterator to the new end of that range.*/

//remove(b,e,t);
template<class ForwardIterator, class Type>
ForwardIterator removeMe(ForwardIterator b,ForwardIterator e, Type t)
{
    ForwardIterator b1 = b;
    while (b!= e)
    {
        if (!(*b == t))
        {
            *b1 = *b;
            ++b1;
        }
        ++b;
    }
    return b1;
}
/*Partitions the elements in the range [b,e) based on the predicate p, so that elements for which the predicate is true
are at the front of the container. Returns iterator to the first element for which the predicate is false or e if the predicate
is true for all elements*/
//partition(b,e,p);
template<class BiIterator, class Pred>
BiIterator partitionMe(BiIterator b, BiIterator e, Pred p)
{

    while (b!= e)
    {
        while (p(*b))
        {
            ++b;
            if(b == e)
            {
                return b;
            }
        }
        do
        {
            --e;
            if(b == e)
            return b;
        }
        while(!pred(*e));
        swap(*b, *e);
        ++b;
    }
    return b;
}
