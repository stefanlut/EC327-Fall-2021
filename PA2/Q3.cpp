#include <iostream>
#include <iomanip>
using namespace std;
int k = 2,maximum, counter = 1;
bool flag = false;
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
    if(n == 1)
    {
        printRhombus(n);
        return 0;
    }
    else if ( n == 2)
    {
        maximum = n;
        cout << setw(maximum * 2 - 1);
        printRhombus(1);
        printRhombus(n);
        printRhombus(n-1);
        return 0;
    }
    else if ( n >= 3)
    {
        maximum = n;
        cout << setw(maximum * 2 - 1);
        printRhombus(1);
        printRhombus(n-1);
        printRhombus(n);
    }
    

    return 0;
}
void printRhombus(int n)
{
    if (n == 1 )
    {
        cout << n << endl;
        
    }
    
    else if (n != 1 && flag)
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
        do
        {
            cout << " ";
            i++;
        } while (i < k);
        
        k +=2;
        printRhombus(n-1);
    }
    else if (!flag && n != 1)
    {
        if(n - 1 == 1) 
        {
            cout << setw(n * 2 - 1) << 1 << " ";
            int i = 2;
            
            while(i < counter + 1)
            {
                cout << i << " ";
                i++;
            }
            
            while(i > 0)
            {
                cout << i << " ";
                i--;
            }
            counter++;
            cout << endl;
            flag = true;
        }
        else 
        {
            cout << setw(n * 2 - 1) << 1 << " ";
            int i = 1 * counter;
            if(i == 1) i++;
            while(i < counter + 1)
            {
                cout << i << " ";
                i++;
            }
            
            while(i > 0)
            {
                cout << i << " ";
                i--;
            }
            counter++;
            cout << endl;
            printRhombus(n-1);
        }
            
    }
    
}