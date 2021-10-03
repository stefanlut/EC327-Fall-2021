#include <iostream>
#include <stdio.h>
#include <math.h>
#define ASCII_OFFSET 48

using namespace std;
/* Referencing content found in
 https://www.geeksforgeeks.org/minimum-distance-from-a-point-to-the-line-segment-using-vectors/

    Q1 - Stefan Lütschg
*/

int main()
{
    char inputCoordinates[32];
    int ch,a;
    int pairOne[2], pairTwo[2], pairThree[2];
    int vectorAB[2], vectorBC[2], vectorAC[2];
    double resultDistance;


    cout << "Enter three x,y coordinates:"<< endl;
    a = 0;
    // Using another method for input that I learned in another C course, because cin ignores whitespaces and is a PITA for me
    while((ch=getchar()) != '\n') 
    {
        inputCoordinates[a] = ch;
        a++;
        if(a == 31) break;
    }
    inputCoordinates[a] = '\0';
    cout<< "The coordinates are: " << inputCoordinates << endl;
    
    /*
    Need to subtract 48 from all coordinates,
    because casting chars as ints will convert them to ASCII values.
    Thus, need to take out the ASCII offset from each number.
    */
    
    pairOne[0] =(int) inputCoordinates[0] - ASCII_OFFSET;
    pairOne[1] =(int) inputCoordinates[2] - ASCII_OFFSET;

    pairTwo[0] =(int) inputCoordinates[4] - ASCII_OFFSET;
    pairTwo[1] =(int) inputCoordinates[6] - ASCII_OFFSET;

    pairThree[0] =(int) inputCoordinates[8] - ASCII_OFFSET;
    pairThree[1] =(int) inputCoordinates[10] - ASCII_OFFSET;

    /* Begin math nonsense:
    First need to establish vectors,
    Need vectors to do dot product and thus find the shortest distance,
    It's going to be long and stupid and I'm going to hate every minute of it,
    but it'll work.
    */
    vectorAB[0] = pairTwo[0] - pairOne[0];
    vectorAB[1] = pairTwo[1] - pairOne[1];

    vectorBC[0] = pairThree[0] - pairTwo[0];
    vectorBC[1] = pairThree[1] - pairTwo[1];

    vectorAC[0] = pairThree[0] - pairOne[0];
    vectorAC[1] = pairThree[1] - pairOne[1];
    double AB_BC,AB_AC;

    AB_BC = vectorAB[0] * vectorBC[0] + vectorAB[1] * vectorBC[1];
    AB_AC = vectorAB[0] * vectorAC[0] + vectorAB[1] * vectorAC[1];

    if(AB_BC > 0) // If Point C is closer to point B than point A
    {
        double x,y;
        x = pairThree[0] - pairTwo[0];
        y = pairThree[1] - pairTwo[1];
        resultDistance = sqrt(x*x + y*y);
    }
    else if(AB_AC < 0) // If Point C is closer to point A than point B
    {
        double x,y;
        x = pairThree[0] - pairOne[0];
        y = pairThree[1] - pairOne[1];
        resultDistance = sqrt(x*x + y*y);
    }
    else // Perpendicular Distance
    {
        double norm = sqrt(vectorAB[0] * vectorAB[0] + vectorAB[1] * vectorAB[1]);
        resultDistance = abs(vectorAB[0] * vectorAC[1] - vectorAC[0] * vectorAB[0]) / norm;
    }

    cout << "The shortest distance for ("<< pairThree[0] << "," << pairThree[1];
    cout << ") to the line composed of (" << pairOne[0] << "," << pairOne[1];
    cout << ") and (" << pairTwo[0] << "," << pairTwo[1];
    cout << ") is " << resultDistance << endl;
    return 0;
}