#include <iostream>
#include <fstream>
using namespace std;

extern const int PANCAKES;
extern const int FRENCHTOAST;
extern const int WAFFLES;
extern const int FRUITPLATE;

//4 FIX statements
//add getBreakfastOrders header
int* getBreakfastOrders(int count)//FIX
{
	
	int *breakfastArray = new int[count];//FIX
	for(int i=0; i< count; i++)
	{
		cout << "Order #" << i + 1 << " is?: ";
		cin >> *(breakfastArray + i);//FIX
	}
	
	return breakfastArray;//FIX
}

//6 Fix statements
//add processBreakfastFile header
char* processBreakfastFile(int* orders, int orderCount)//FIX
{
	char *filename = new char[32];//FIX
	filename = (char*) "Orders.txt";
	ofstream outputFile;
	outputFile.open(filename);
	outputFile.clear();
	for (int i=0; i<orderCount; i++)
	{
		 switch(orders[i])
		  {
			case 1:  outputFile << "Pancakes" << endl; //FIX
				break;
			case 2:  outputFile << "FrenchToast" << endl; //FIX 
				break;
			case 3:  outputFile << "Waffles" << endl; //FIX  
				break;
			case 4:  outputFile << "FruitPlate" << endl; //FIX
				break;
			default:
			  cout << "Error processing breakfast. There is no " << orders[i] << endl;
		  }
		
	}
	outputFile.close();
	return filename;
}

