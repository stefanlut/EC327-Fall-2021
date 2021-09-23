#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    char inputCoordinates[32];
    int ch,a;
    cout << "Enter three x,y coordinates:"<< endl;
    // cin >> noskipws >> inputCoordinates;
    a = 0;
    
    
    while((ch=getchar()) != '\n')
    {
        inputCoordinates[a] = ch;
        a++;
        if(a == 31) break;
    }
    inputCoordinates[a] = '\0';
    cout<< "The coordinates are: " << inputCoordinates << endl;
    return 0;
}