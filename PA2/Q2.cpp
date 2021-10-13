#include <iostream>
#include "FileFunctions.h"
#include "Statistics.h"
using namespace std;
int * DoubleAndReverse(int *list, int size)
{
    
}
int main()
{
    char filename[10] = {'d','a','t','a','.','t','x','t','\0'};
    cout << "Writing file: " << filename << endl;
    WriteRandomData(5, 1000,filename);

    cout << "Reading file: " << filename << endl;


    return 0;
}