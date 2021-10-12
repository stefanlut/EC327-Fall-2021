#include <time.h>
#include <cstdlib>
#include "FileFunctions.h"
#include <fstream>
using namespace std;
void WriteRandomData(int N, int M, const char *filename)
{
    srand(time(NULL));
    int randNum;
    ofstream myfile (filename);
    for(int i = 0; i < N; i++)
    {
        randNum = rand() % (M + 1);
        myfile << randNum << endl;
    }
    myfile.close();
}
void ReadData(const char *filename, int &size, int myArray[])
{
    ifstream myfile (filename);

}
