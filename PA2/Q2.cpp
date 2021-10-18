#include <iostream>
#include "FileFunctions.h"
#include "Statistics.h"
using namespace std;
int * DoubleAndReverse(int *list, int size)
{
    int newArray[size * 2];
    for(int i = 0; i < size; i++)
    {
        newArray[i] = *(list + i);
        
    }
    for(int i = size; i > 0; i--)
    {
        newArray[size * 2 - i] = *(list + i);
    }
    return newArray;
}
int main()
{
    char filename[10] = {'d','a','t','a','.','t','x','t','\0'};
    int size;
    int myArray[32];
    
    cout << "Writing file: " << filename << endl;
    WriteRandomData(10, 1000,filename);

    cout << "Reading file: " << filename << endl;
    ReadData(filename,size,myArray);
    cout << "Array size is " << size << endl;
    //int newArray[size*2] = DoubleAndReverse(myArray, size);
    cout << "Double and reversed is [";
    // for(int i = 0; i < size * 2; i++)
    // {
    //     cout << " " << 
    // }
    return 0;
}