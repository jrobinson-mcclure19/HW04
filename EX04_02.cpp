////////////////////////
// Jalen Robinson-McClure
// CS 172
// June 9th 2017
// EX 04-02
/////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

int* doubleCapacity(const int* list, int size) // double function 
{
	int* newList = new int[size]; // create an array

	newList[size * 2] =  list[size];

	return newList;
}

	int main()
{
		int list[2] = {1,2};
		
		int* p = doubleCapacity(list, 2);


		return 0;

		delete[] list;
}