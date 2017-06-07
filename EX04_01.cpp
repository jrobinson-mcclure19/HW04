/////////////////////////////
// Jalen Robinson-McClure
// June 6th 2017
// EX 04_01
// CS 172
////////////////////////////


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
	// variables
	const int size = 6;
	double sum =  0;
	double average;
	int counter = 0;

	// given array
	int list[size] = { 2,4,6,8,10,12 };

	// display the array
	cout << "The numbers in the array are: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << ", ";
	}
	cout << endl;

	//calculate the sum
	int *ptr = list;
	for (ptr = list; ptr < list + size; ptr++)
	{
		sum = sum + *ptr;
	}

	cout << "sum: " << sum << endl;

	// calculate average
	average = (sum / 6);
	cout << "ave: " << average << endl;

	// compares value of point in array to the average
	for (int i = 0; i < 6; i++)
	{
		if (list[i] > average)
		{
			counter++;
		}
	}

	cout << "There are " << counter << " numbers above the average." << endl;

}
