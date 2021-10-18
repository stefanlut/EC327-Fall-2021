#include <iostream>
#include "pa2Functions.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <cassert>
#include <string>
#define PI 3.14159
#define esc 27
#define ASCII_OFFSET 48
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
        
        return flag;
     }
    else if(!isdigit(entry) && flag)
        return flag;
    return flag;    
}
void writeDataToFile(const char * filename)
{
    char c;
    ofstream ostr;
    
    ostr.open(filename, ios::out);
    if(!ostr.is_open())
    {
        cout << filename << "cannot be opened!" << endl;
        assert(false);
    }
    cout << "Begin typing file, hit escape and enter to end program" << endl << endl; 
    while(!cin.eof())
    {
        cin.get(c);
        if(c == '\e') break;
        ostr << c;
        cout << c;
    }
    cout << endl;
    ostr.close();

}
void readDataFromFile(const char * filename)
{
    string line;
    char command;
    char parameters[10];
    int firstI,lastI,deltaI,num;
    double firstD,lastD,deltaD;
    ifstream myfile (filename);

    if(!myfile.is_open())
    {
        cout << filename << "cannot be opened!" << endl;
        assert(false);
    }
    while(getline(myfile,line))
    {
        if(line.length() == 1) // command code
        {
            command = line[0];  
        }
        else // parameters
        {
            for(int i = 0; i < line.length(); i++)
            {
                parameters[i] = line[i];
            }
            switch(command)
            {
                case 'F':
                case 'f':
                num = (int) parameters[0] - ASCII_OFFSET;
                cout << num << " factorial is equal to " << factorial(num) << endl;
                break;
                case 'B':
                case 'b':
                num = (int) parameters[0] - ASCII_OFFSET;
                cout << "The Fibonacci number at element " << num << " is " << fibonacci(num) << endl;
                break;
                case 'D':
                case 'd':
            
                break;
            }
        }
    }
}
int factorial(int num)
{   
    if(num == 0)
        return 1; // 0 factorial is equal to 1 , this is the base case
    else
    {
        return num * factorial(num - 1);
    }
    
}
int fibonacci(int num)
{    
    if (num <= 1)
        return num;
    return fibonacci(num - 1) + fibonacci(num - 2);

}
double findSqrtValue(double num)
{
    
    return sqrt(num);
 
}
double naturalLog(double num)
{
    return log(num);
}
double areaCircle(double radius)
{
    return radius * radius * PI;
}
double areaSquare(double length)
{
    return length * length;
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
    return  pow(4*num,num) + num + 10;
}
double doMath(double num, char entry)
{
    double result;
    if(entry == 'S' || entry == 's')
        return sin(num * PI/180);
    else if(entry == 'N' || entry == 'n')
        return cos(num * PI/180);
    else if(entry == 'X' || entry == 'x')
        return exp(num);
    else 
        return num;
    
}
double lucky(double num)
{
    srand(time(NULL));
    double result;
    return result;
}