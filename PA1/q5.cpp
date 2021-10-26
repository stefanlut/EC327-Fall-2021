#include <iostream>

using namespace std;
// Q5 - Stefan Lütschg
int main()
{
    char inputChar, newChar;
    int offsetNum,tempNum;

    cout << "Enter character: ";
    cin >> inputChar;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offsetNum;

    if(isdigit(inputChar) && offsetNum == '0') // if a number is input and the offset is 0
    {
        cout << "New charcter: " << newChar << endl;
        return 0;
    }
    else if(!isdigit(inputChar) && offsetNum == 0) // if a character is input and the offset is 0
    {
        if(isupper(inputChar)) newChar = tolower(inputChar);
        else newChar = toupper(inputChar);

        cout << "New charcter: " << newChar << endl;
        return 0;
    }
    
    // This section deals with characters when the offset isn't zero.
    tempNum = (int) inputChar; // casting the character to its corresponding ASCII value
    tempNum += offsetNum; // adding the offset to the ASCII value
    newChar = (char) tempNum; // casting from ASCII value back to a character
    if(tempNum >=127)
    {
        cout << "Error, character doesn't exist" << endl;
        return 1;
    }
    cout << "New charcter: " << newChar << endl;
    return 0;
}