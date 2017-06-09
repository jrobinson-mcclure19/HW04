////////////////////////////
// Jalen Robinson-McClure
// CS 172
// EX04_05
// June 9th, 2017
///////////////////////////

#include <iostream>
#include "course.h"
#include <cmath>
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
}
// deconstructor
Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents--;
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}
// clear function
void Course::clear()
{
	delete* numberOfStudents;
}
// Ex04_02 to increase size of class
int* doubleCapacity(const int* list, int size) // double function 
{
	int* newList = new int[size]; // create an array

	newList[size * 2] = list[size];

	return newList;
}
// Copy function
Course::Course(const Course& course)
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
}