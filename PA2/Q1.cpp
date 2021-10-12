#include <iostream>
#include "pa2Functions.h"
extern const int ENTRIES = 10;
#define ASCII_OFFSET 48
using namespace std;
// Use the following bash command to run this because I am tired of typing
// g++ -c Q1.cpp pa2Functions.cpp ;g++ -o Q1 Q1.o pa2Functions.o ; rm Q1.o pa2Functions.o ; ./Q1
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
            int entryCounter = 0;
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
                    
                    if(findNextOddValue(num) < lastI && entryCounter < ENTRIES)
                    {
                        num = findNextOddValue(num);
                        cout << num <<" ";
                    }
                    else
                        break;
                    entryCounter++;
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
                    if(findNextEvenValue(num) < lastI && entryCounter < ENTRIES)
                    {
                        num = findNextEvenValue(num);
                        cout << num <<" ";

                    }
                    else 
                        break;
                    entryCounter++;
                }
                cout << lastI << endl;
            }
            else if(entry == 'R' || entry == 'r')
            {
                cout << "Please enter command parameters: ";
                cin >> firstD;
                cin >> lastD;
                cin >> deltaD;
                if(firstD > lastD || deltaD < 0)
                {
                    cout << "No computation needed." << endl;
                 
                    break;
                }
                double num = firstD;
                double sqrtResult;
                cout << num << " ";
                while (num < lastD)
                {
                    if(findSqrtValue(num) < lastD && entryCounter < ENTRIES)
                    {
                        sqrtResult = findSqrtValue(num);
                        cout << sqrtResult << " ";
                    }
                    else
                        break;
                    entryCounter++;
                    num += deltaD;
                }
                cout << lastD << endl;
            }
            else if(entry == 'U' || entry == 'u')
            {
                cout << "Please enter command parameters: ";
                cin >> firstD;
                cin >> lastD;
                cin >> deltaD;
                if(firstD > lastD || deltaD < 0)
                {
                    cout << "No computation needed." << endl;
                 
                    break;
                }
                double num = firstD;
                double squareResult;
                cout << num << " ";
                while(num < lastD)
                {
                    if(areaSquare(num) < lastD && entryCounter < ENTRIES)
                    {
                        squareResult = areaSquare(num);
                        cout << squareResult << " ";
                    }
                    else
                    {
                        break;
                    }
                    entryCounter++;
                    num += deltaD;
                    
                }
                cout << lastD << endl;
            }
            else if(entry == 'C' || entry == 'c')
            {
                cout << "Please enter command parameters: ";
                cin >> firstD;
                cin >> lastD;
                cin >> deltaD;
                if(firstD > lastD || deltaD < 0)
                {
                    cout << "No computation needed." << endl;
                 
                    break;
                }
                double num = firstD;
                double circleResult;
                cout << num << " ";
                while(num < lastD)
                {
                    if(areaCircle(num) < lastD && entryCounter < ENTRIES)
                    {
                        circleResult = areaCircle(num);
                        cout << circleResult << " ";
                    }
                    else
                    {
                        break;
                    }
                    entryCounter++;
                    num += deltaD;
                    
                }
                cout << lastD << endl;
            }
            else if(entry == 'L' || entry == 'l')
            {
                cout << "Please enter command parameters: ";
                cin >> firstD;
                cin >> lastD;
                cin >> deltaD;
                if(firstD > lastD || deltaD < 0)
                {
                    cout << "No computation needed." << endl;
                 
                    break;
                }
                double num = firstD;
                double logResult;
                cout << num << " ";
                while(num < lastD)
                {
                    if(naturalLog(num) < lastD && entryCounter < ENTRIES)
                    {
                        logResult = naturalLog(num);
                        cout << logResult << " ";
                    }
                    else
                    {
                        break;
                    }
                    entryCounter++;
                    num += deltaD;
                    
                }
                cout << lastD << endl;
            }
            else if(entry == 'S' || entry == 's' || entry == 'N' || entry == 'n' || entry == 'X' || entry == 'x')
            {
                cout << "Please enter command parameters: ";
                cin >> firstD;
                cin >> lastD;
                cin >> deltaD;
                if(firstD > lastD || deltaD < 0)
                {
                    cout << "No computation needed." << endl;
                 
                    break;
                }
                double num = firstD;
                double trigResult;
                cout << num << " ";
                while(num < lastD)
                {
                    if(doMath(num,entry) < lastD && entryCounter < ENTRIES)
                    {
                        trigResult = doMath(num,entry);
                        cout << trigResult << " ";
                    }
                    else
                    {
                        break;
                    }
                    entryCounter++;
                    num += deltaD;
                    
                }
                cout << lastD << endl;
            }
            else if( entry == 'O' || entry == 'o')
            {
                char filename[32];
                writeDataToFile(filename);
            }
            
        }
        else
        {
            cout << "Invalid Command Code" << endl;
        }
        
    }

    return 0;
}