#include <iostream>
#include "pa2Functions.h"
#include <cmath>
#include <ctime>
#include <cstdlib>

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
    if(isdigit(entry) || !flag) // If a number is entered, return false
     {
        
        return false;
     }
    else if(!isdigit(entry) && flag)
        return true;
    return flag;    
}
void writeDataToFile(const char * filename)
{

}
void readDataFromFile(const char * filename)
{

}
int factorial(int num)
{   int result;
    if(num == 0 || num == 1)
        result = 1; // 0 factorial is equal to 1 and 1 factorial is equal to 1
    else
    {
        result = num;
        for(int i = num; i > 1; i--)
        {
            result = result * (i-1);
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
double findSqrtValue(double num)
{
    double result = sqrt(num);
    return result;
 
}
double naturalLog(double num)
{
    double result = log(num);
    return result;
}
double areaCircle(double radius)
{
    double result = radius * radius * M_PI;
    return result;
}
double areaSquare(double length)
{
    double result = length * length;
    return result;
}
int findNextOddValue(int num)
{
    int result = num;
    
    do
    {
        result++;
    } while (result %2 != 1);
    
    return result;
}
int findNextEvenValue(int num)
{
    int result = num;
    
    do
    {
        result++;
    }while(result % 2 != 0);
    
    return result;
}
double findNyanCatValue(double num)
{
    double result;
    result = pow(4*num,num) + num + 10;
    return result;
}
double doMath(double num, char entry)
{
    double result;
    if(entry == 'S' || entry == 's')
        result = sin(num);
    else if(entry == 'N' || entry == 'n')
        result = cos(num);
    else if(entry == 'X' || entry == 'x')
        result = exp(num);
    return result;
}
double lucky(double num)
{
    srand(time(NULL));
    double result;
    return result;
}