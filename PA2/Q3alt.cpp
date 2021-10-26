#include <iostream>
#include <iomanip>

using namespace std;
void printRhombus(int);
int maximum;
int main()
{
    int n;
    cout << "Enter a number [1-9]: ";
    cin >> n;
    while(n < 1 || n > 9)
    {
        cout << "Error, enter a number [1-9]: ";
        cin >> n;
    }
    maximum = n;
    printRhombus(n);
}
void printRhombus(int n)
{
    if(n == 1)
    {
        cout << setw(maximum * 2 - 1) << n << endl;
        return;
    }
    else
    {
        
    }
}