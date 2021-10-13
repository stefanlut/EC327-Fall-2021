#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int count = 7;
   int *pcount = &count;
   --*pcount+*pcount;
   cout << count << endl;
   cout << *pcount << endl;
   cout << pcount << endl;
    return 0;
}