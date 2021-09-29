#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, counter = 1;
    cout << "What number would you like me to check? ";
    cin >> num;
    if(num < 0)
    {
        cout << "I don't deal with negativity!" << endl;
        return 1;
    }
    else if(num == 1)
    {
        cout << "1 is not a prime number" << endl;
        return 0;
    }
    cout << "1 ";
    for(int i = 2; i <=num;i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            counter++;
        }
    }
    cout << endl;
    if(counter > 1)
        cout << "This number is not Prime!" << endl;
    else
        cout << "This number is Prime!" << endl;

    return 0;
}