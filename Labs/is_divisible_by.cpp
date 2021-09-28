#include <iostream>

using namespace std;

int main()
{
    int num;
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



    return 0;
}