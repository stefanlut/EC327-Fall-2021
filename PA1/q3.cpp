#include <iostream>

using namespace std;

int main()
{
    int num1,num2,ch;
    char hex1[32],hex2[32];
    cout << "Enter two positive integers that are the same length" << endl;
    cin >> num1;
    cin >> num2;
    sprintf(hex1,"%X", num1);
    cout << hex1 << endl;
    sprintf(hex2,"%X", num2);
    cout << hex2 << endl;
   
    return 0;
}