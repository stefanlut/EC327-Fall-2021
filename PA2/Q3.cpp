#include <iostream>

using namespace std;

void printRhombus(int n);
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
    printRhombus(n);


    return 0;
}
void printRhombus(int n)
{
    if (n == 1)
    {
        cout << n << endl;
    }
    else
    {
        int i = 1;
        while(i < n)
        {
            cout << i << " ";
            i++;
        }
        while(i > 0)
        {
            cout << i << " ";
            i--;
        }
        cout << endl;
        
        printRhombus(n-1);
    }
}