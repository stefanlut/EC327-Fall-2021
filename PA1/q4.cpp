#include <iostream>
#include <cstring>

using namespace std;
// Q4 - Stefan Lütschg
int main()
{
    char num[32], rev[32];
    int length;
    bool flag;
    cout << "Enter a number: ";
    cin >> num;
    length = strlen(num);

    for (int i = 0; i< length; i++)
    {
        if(!isdigit(num[i])) // Error checking, seeing if a character was entered instead of a number
        {
            cout << "Invalid number string entered" << endl;
            return 1;
        }
    }
    for(int i = 1; i < length + 1; i++)
    {
        // rev is the reversed string, built from element 0 to i
        // rev takes elements from the input string num starting at element "length-i"
        rev[i-1] = num[length-i];
        
    }
    for(int i = 0; i < length; i++)
    {
        if(num[i] != rev[i]) 
        {
            // if any element in rev is not equal to the corresponding element in num
            // the boolean flag is set to true, indicating that the input number is not a palindrome
            flag = true;
            break;
        }
    }
    if(flag) cout << "The number " << num << " is not a palindrome" << endl;
    else cout << "The number " << num << " is a palindrome" << endl;

    return 0;
}