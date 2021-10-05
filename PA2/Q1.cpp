#include <iostream>
#include "pa2Functions.h"
extern const int ENTRIES = 10;
#define ASCII_OFFSET 48
using namespace std;

int main()
{
    char entry;
    double firstD,lastD,deltaD;
    char commandParameters[32]; //Needs to be decent size for file input/output
    int firstI,lastI,deltaI;
    initialize();
    while(true)
    {
        cout << "Please enter command code: ";
        cin >> entry;
        if(checkCode(entry))
        {
            if(entry == 'Q' || entry == 'q')
                break;
            
            if(entry == 'B' || entry == 'b')
            {
                cout << "Please enter command parameters: ";
                cin >> firstI;
                int num = firstI;
                cout << "The Fibonacci number at element " << num << " is " << fibonacci(num) << endl;
            }
            else if(entry == 'F' || entry == 'f')
            {
                cout << "Please enter command parameters: ";
                cin >> firstI;
                int num = firstI;
                cout << num << " factorial is equal to " << factorial(num) << endl;
            }
            else if(entry == 'D' || entry == 'd')
            {
                cout << "Please enter command parameters: ";
                cin >> firstI;
                cin >> lastI;
                if(firstI > lastI)
                {
                    cout << "No computation needed." << endl;
                    break;
                }
                int num = firstI;
                cout << firstI << " ";
                while (num < lastI)
                {
                    if(findNextOddValue(num) % 2 == 1)
                        cout << findNextOddValue(num) <<" ";
                    num++;
                }
                cout << lastI << endl;
            }
            else if(entry == 'E' || entry == 'e')
            {
                cout << "Please enter command parameters: ";
                cin >> firstI;
                cin >> lastI;
                if(firstI > lastI)
                {
                    cout << "No computation needed." << endl;
                    break;
                }
                int num = firstI;
                cout << firstI << " ";
                while (num < lastI)
                {
                    if(findNextEvenValue(num) % 2 == 0)
                        cout << findNextEvenValue(num) <<" ";
                    
                    num++;
                }
                cout << lastI << endl;
            }
        }
        else
        {
            cout << "Invalid Command Code" << endl;
        }
        
    }

    return 0;
}