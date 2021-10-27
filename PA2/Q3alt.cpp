#include <iostream>
#include <iomanip>

using namespace std;
void printRhombus(int);
int maximum;
bool first = true, buildUp = true;
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
        if(first)
        {
            printRhombus(1);
            first = false;
        }
        if(n == maximum)
        {
            
            for(int i = 1; i < maximum + 1; i++)
            {
                cout << i << " ";
            }
            for(int i = maximum - 1; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
            printRhombus(n - 1);
        }
        else
        {
            cout << setw(n * 2 - 1);
            for(int i = 1; i < n + 1; i++)
            {
                cout << i << " ";
            }
            for(int i = n - 1; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
            printRhombus(n - 1);
        }
    }
}