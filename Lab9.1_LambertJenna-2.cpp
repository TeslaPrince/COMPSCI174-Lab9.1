// Lab9.1_LambertJenna.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
#include<limits>
using namespace std;

void swap(int*, int*);   //Function prototype v2

int main()
{
	// array variable declaration and initialization:
	int num[6] = { 23,45,12,9,11,13 };
	int i = 3, j = 5; // i and j are indexes that indicate the positions of 
	// of two elements in the array
	cout << "Enter two integers between 0 and 6: ";
	cin >> i >> j;
	while (cin.fail() || i > 5 || i < 0 || j>5 || j < 0)
	{
		cout << "Invalid input! Try again!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter two integers between 0 and 5: ";
		cin >> i >> j;
	}
	cout << "Before calling swap function: \n";
	cout << "Array element at [" << i << "] is: " << num[i] << endl;
	cout << "Array element at [" << j << "] is: " << num[j] << endl;

	// add a statemnet to call the swap function here.
	swap(num[i], num[j]);   //call swap function

	cout << "\nAfter calling swap function: \n";
	cout << "Array element at [" << i << "] is: " << num[i] << endl;
	cout << "Array element at [" << j << "] is: " << num[j] << endl;

	return 0;
}
//Function definition
void swap(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}