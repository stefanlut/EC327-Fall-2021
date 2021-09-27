#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char num[32], rev[32];
    int length;
    cout << "Enter a number: ";
    cin >> num;
    length = strlen(num);
    for (int i = 0; i< length; i++)
    {
        if(!isdigit(num[i])) 
        {
            cout << "Invalid number string entered" << endl;
            return 1;
        }
    }
    for(int i = 1; i < length; i++)
    {
        
        rev[i-1] = num[length-i];
        
    }
    // if (rev == num) cout << "The number " << num << " is a palindrome" << endl;
    // else cout << "The number " << num << " is not a palindrome" << endl;

    return 0;
}