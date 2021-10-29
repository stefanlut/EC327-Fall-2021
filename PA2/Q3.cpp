#include <iostream>
#include <iomanip>

using namespace std;
void printRhombus(int);
int maximum,i = 1;
bool flag = true;
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
    if(maximum == 1)
    {
        printRhombus(maximum);
        return 0;
    }
    else
    {
        printRhombus(i);
        i++;
        printRhombus(i);
        return 0;
    }
}
void printRhombus(int n)
{
    if(n == 1)
    {
        cout << setw(maximum * 2 - 1) << n << endl;
        n++;
        return;
    }
    else
    {
        if(n < maximum && flag)
        {
            cout << setw((maximum-(n-1)) * 2 - 1);
            for(int j = 1; j < n+1; j++)
            {
                cout << j << " ";
            }
            for(int j = n-1; j > 0; j--)
            {
                cout << j << " ";
            }
            
            cout << endl;
            printRhombus(n+1);
        }
        else if(n == maximum && flag)
        {
            
            for(int j = 1; j < maximum+1; j++)
            {
                cout << j << " ";
            }
            for(int j = maximum-1; j > 0; j--)
            {
                cout << j << " ";
            }
            cout << endl;
            flag = false;
            
            printRhombus(n-1);
        }
        else if(n < maximum && !flag)
        {
            cout << setw((maximum-(n-1)) * 2 - 1);
            for(int j = 1; j < n+1; j++)
            {
                cout << j << " ";
            }
            for(int j = n-1; j > 0; j--)
            {
                cout << j << " ";
            }
            
            cout << endl;
            printRhombus(n-1);
        }
    }
}