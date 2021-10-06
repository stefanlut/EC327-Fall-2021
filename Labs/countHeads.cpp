#include "countHeads.h"

int choose(int n, int r)
{

    unsigned result = 1; 
    if(r > n-r)
        r = n-r;
    for (unsigned i=1; i <= r; ++i) 
    { 
	    result = result * n-- / i; 
    } 
    return result;
}