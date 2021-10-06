#include <iostream>
#include "countHeads.h"
using namespace std;

int main()
{
    unsigned n,r,result;
    char entry;
    while(true)
    {
        
        cout << "How many coins would you like to flip? ";
        cin >> n;
        cout << "How many heads do you want? ";
        cin >> r;
        result = choose(n,r);
        cout << "Flipping " << n << " coins, we can get " << r << " heads " << result << " ways" << endl;

        cout << "Flip again? (y/n) ";
        cin >> entry;
        if(entry == 'y' || entry == 'Y')
            continue;
        else if(entry == 'n' || entry == 'N')
            break;
    }
    return 0;
}