#include <iostream>
#include "pa2Functions.h"
extern const int ENTRIES = 10;
using namespace std;
//extern const int ENTRIES = 10;
int main()
{
    char entry;
    double first,last,delta;
    initialize();
    while(true)
    {
        cout << "Please enter command code: ";
        cin >> entry;
        if(checkCode(entry))
        {
            if(entry == 'Q' || entry == 'q')
                break;
            //else if(entry == 'Q' || entry == 'q')
        }
        else
        {
            cout << "Invalid Command Code" << endl;
        }
        
    }

    return 0;
}