#include <iostream>
#include "pa2Functions.h"

extern const int ENTRIES;
using namespace std;
void initialize()
{
    printf("EC327: Introduction to Software Engineering\nFall 2021\nProgramming Assignment 2\nValue of Entries is: %d\n", ENTRIES);
}
bool checkCode(char entry)
{
    char validCodes[33] = {'F','f','B','b','R','r','U','u','C','c','E','e','K','k','S','s','N','n','X','x','L','l','Y','y','D','d','I','i','O','o','Q','q','\0'};
    bool flag;
    for(int i = 0; i < 33;i++)
    {
        if(entry == validCodes[i])
        {
            flag = true;
            break;
        }
        else
            flag = false;
    }
    if(isdigit(entry) || !flag)
     {
        
        return false;
     }
    else if(!isdigit(entry) && flag)
        return true;
        
}
void writeDataToFile(const char *)
{

}
void readDataFromFile(const char *)
{

}
int factorial(int num)
{   int result;
    if(num == 0)
        result = 1; // 0 factorial is equal to 1
    else
    {
        for(int i = num; i > 1; i--)
        {
            result = i *(i-1);
        }
    }
    return result;
}
int fibonacci(int num)
{    
    if (num <= 1)
        return num;
    return fibonacci(num - 1) + fibonacci(num - 2);

}
double findSqrtValue(double)
{

}
double naturalLog(double)
{

}
double areaCircle(double)
{

}
double areaSquare(double)
{

}
int findNextOddValue(int)
{

}
int findNextEvenValue(int)
{

}
double findNyanCatValue(double)
{

}
double doMath(double, char)
{

}
double lucky(double)
{
    
}