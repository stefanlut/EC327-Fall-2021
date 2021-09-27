#include <iostream>
#include <cstring>
using namespace std;
/* Q3
Might have to reference concepts from this website:
https://www.permadi.com/tutorial/numDecToHex/
    - Stefan Lütschg
*/
int main()
{
    int num1,num2;
    char hex1[32],hex2[32]; //32 character buffers, because why would you write numbers larger than that
    cout << "Enter two positive integers: " ;
    cin >> num1;
    cin >> num2;
    sprintf(hex1,"%X", num1);
    cout << hex1 << endl;
    sprintf(hex2,"%X", num2);
    cout << hex2 << endl;
    int counter = 0;
    int hammingDistance = 0;
    int cutoff;
    if(strlen(hex1) > strlen(hex2))
    {
        cutoff = strlen(hex1);
    }
    else
    {
        cutoff = strlen(hex2);
    }
    while(counter != cutoff )
    {
        if(hex1[counter] != hex2[counter]) hammingDistance++;
        
        counter++;
    }
    cout << "The hamming distance between " << num1 << " and " << num2 <<" in hex format is: " << hammingDistance << endl;
    
    return 0;
}