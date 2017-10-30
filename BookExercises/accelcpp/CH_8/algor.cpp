#include "algor.h"

/*Looks at values b->e and compares to values in d*/
/*
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
*/
/*/*Runs the function f on the elements in the range [b,e), storing the result in d*/
//transform(b,e,d,f);
/* Creates a local variable and initializes it to a copy of t with same type as t, adds
each element in the range [b,e) to the variable and returns a copy of the variable as its
result*/
/*
template<class Input, class Type>
Type accumulateMe(Input b ,Input e ,Type t)
{
    Type d;
    while(b != e)
    {
        d += *t;
    }

    return d;
}
*/
/*Each of the following three look for a given value in the sequence [b,e)*/
/*Looks for the value t*/
//find(b,e,t);
/*uses a search algorithm to for the sequence denoted by [b2, e2)*/
//search(b,e,b2,e2);
/*tests each element against the predicate p*/
//find_if(b,e,p);


/*Algorithms to copy the sequence from [b,e) to the destination d*/
/*copies the entire sequence*/
//copy(b,e,d);
/*copies all elements not equal to t*/
//remove_copy(b,e,d,t);
/*copies all elements where predicate p fails*/
//remove_copy_if(b,e,d,p);

/*Arranges the container so elements from [b,e) where predicate p is false are at the front of the range.
Returns an iterator denoting one past the range of these "unremoved" elements*/
//remove_if(b,e,p);
/*Tests which elements to keep against the value t*/
//remove(b,e,t);

/*Partitions the elements in the range [b,e) based on the predicate p, so that elements for which the predicate is true
are at the front of the container. Returns iterator to the first element for which the predicate is false or e if the predicate
is true for all elements*/
//partition(b,e,p);
