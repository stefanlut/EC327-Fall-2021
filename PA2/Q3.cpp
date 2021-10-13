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
    maximum = n;
    cout << setw(maximum * 2 - 1);
    printRhombus(1);
    printRhombus(n-1);
    n = maximum;
    printRhombus(n);

    return 0;
}
void printRhombus(int n)
{
    if (n == 1)
    {
        cout << n<< endl;
        
    }
    else if (flag)
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
    else if (!flag)
    {
        cout << setw(n * 2 - 1) << 1;
        
        if(n - 1 == 1) flag = true;
        
        else 
        {
            int i = 2;
            do
            {
                
                cout << " " << i;
                i++;
            } while (i < counter + 1);
            
            cout<< " ";
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
// n * 2 - 1 spaces