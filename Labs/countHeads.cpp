#include "countHeads.h"

int choose(int n, int r)
{

    unsigned result = 1; 
    if(r > n-r) // Some cases produce the same results, e.g choose(12,4) == choose(12,8), this if statement takes care of that
        r = n-r;
    for (unsigned i=1; i <= r; ++i) 
    { 
	    result = result * n-- / i; // for 1000 choose 999, this becomes result = 1 * 1000 / 1, interesting
    } 
    return result;
}