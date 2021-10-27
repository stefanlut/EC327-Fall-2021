#include <iostream>
#include <cstring>
using namespace std;
/* Q3
Might have to reference concepts from this website if I had to do this numerically and not using C libraries:
https://www.permadi.com/tutorial/numDecToHex/
    - Stefan Lütschg
*/
int main()
{
    int num1,num2;
    char hex1[32],hex2[32],newHex1[32],newHex2[32]; //32 character buffers, because why would you write numbers larger than that
    cout << "Enter two positive integers: " ;
    cin >> num1;
    cin >> num2;
    sprintf(hex1,"%X", num1); // Letting C do the work of converting to hexadecimal using sprintf
    cout << hex1 << endl;
    sprintf(hex2,"%X", num2);
    cout << hex2 << endl;

    int counter = 0; // counter is the element counter for both strings/char arrays
    int hammingDistance = 0;
    int cutoff;

    // There's a chance one string might be longer than the other, what do you do then?
    // Easy, compare the lengths and the while loop will be based on the longer string
    if(strlen(hex1) > strlen(hex2))
    {
        cutoff = strlen(hex1);
        newHex2[0] = '0';
        for(int i = 0; i < strlen(hex2); i++)
        {
            newHex2[i+1] = hex2[i];
        }
        
        while(counter != cutoff)
        {
            if (newHex2[counter] != hex1[counter]) hammingDistance++;
            counter++;
        }
    }
        
    else if (strlen(hex1) < strlen(hex2))
    {
        cutoff = strlen(hex2);
        newHex1[0] = '0';
        for(int i = 0; i < strlen(hex1); i++)
        {
            newHex1[i+1] = hex1[i];
        }
        
        while(counter != cutoff)
        {
            if (newHex1[counter] != hex2[counter]) hammingDistance++;
            counter++;
        }
    }
    else if(strlen(hex1) == strlen(hex2))
    {
        int length = strlen(hex1);
        while(counter != length)
        {
            if (hex2[counter] != hex1[counter]) hammingDistance++;
            counter++;
        }
    }
        
    
    
    cout << "The hamming distance between " << num1 << " and " << num2 <<" in hex format is: " << hammingDistance << endl;
    
    return 0;
}