#include <iostream>

using namespace std;

int fibonacci(int num)
{    
    if (num <= 1)
        return num;
    return fibonacci(num - 1) + fibonacci(num - 2);

}
int main()
{
    int num;

    cout << "Enter a random number and you'll get the Fibonnaci number: ";
    cin >> num;

    cout << "The number in the sequence is " << fibonacci(num) << endl;


    return 0;
}