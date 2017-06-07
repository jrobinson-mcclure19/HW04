/////////////////////////////
// Jalen Robinson-McClure
// Cs 172
// June 9th, 2017
// EX_04_03
/////////////////////////////

#include <iostream>
#include <algorithm>
using namespace std;
// void function that displays entire array
void printArray(const int* list, int size)
{
	// for loop that displays each array value
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}

int main()
{
	// Array 
	int Array[] = { 1,2,4,5,10,100,2,-22 };
	printArray(Array, 8);
	// function that finds smallest element 
	int* min = min_element(Array, Array + 8);
	// cout smallest element
	cout << " the smallest element is " << *min << endl;

	return 0;
}