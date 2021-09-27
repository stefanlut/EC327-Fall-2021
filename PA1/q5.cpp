#include <iostream>

using namespace std;

int main()
{
    char inputChar, newChar;
    int offsetNum,tempNum;
    
    cout << "Enter character: ";
    cin >> inputChar;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offsetNum;
    if(isdigit(inputChar) && offsetNum == '0')
    {
        cout << "New charcter: " << newChar << endl;
        return 0;
    }
    else if(!isdigit(inputChar) && offsetNum == 0)
    {
        if(isupper(inputChar)) newChar = tolower(inputChar);
        else newChar = toupper(inputChar);

        cout << "New charcter: " << newChar << endl;
        return 0;
    }
    
    tempNum = (int) inputChar;
    tempNum += offsetNum;
    newChar = (char) tempNum;

    cout << "New charcter: " << newChar << endl;
    return 0;
}