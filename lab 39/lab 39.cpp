#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

void fillArrayInt(int* arr);
void showArrayInt(int* arr);
int getMaxInt(int* arr);
int getMinInt(int* arr);
int MaxPointInt(int* arr);
int MinPointInt(int* arr);
double ProdArrInt(int* arr);

int main()
{
	setlocale(0, "");
	
	int arr[SIZE];
	int arr1[SIZE];
	int arr2[SIZE];

	fillArrayInt(arr);
	fillArrayInt(arr1);
	fillArrayInt(arr2);

	showArrayInt(arr);
	showArrayInt(arr1);
	showArrayInt(arr2);

	ProdArrInt(arr);
	ProdArrInt(arr1);
	ProdArrInt(arr2);

	getMaxInt(arr);
	getMaxInt(arr1);
	getMaxInt(arr2);

	MaxPointInt(arr);
	MaxPointInt(arr1);
	MaxPointInt(arr2);

	getMinInt(arr);
	getMinInt(arr1);
	getMinInt(arr2);

	MinPointInt(arr);
	MinPointInt(arr1);
	MinPointInt(arr2);

	cout << "first product of array elements: " << ProdArrInt(arr) << endl;
	cout << "max first mass: " << getMaxInt(arr) << endl;
	cout << "max point first mass: " << MaxPointInt(arr);
	cout << "min first mass: " << getMinInt(arr) << endl;
	cout << "min point first mass: " << MinPointInt(arr) << endl;

	cout << "second product of array elements: " << ProdArrInt(arr1) << endl;
	cout << "max second mass: " << getMaxInt(arr1) << endl;
	cout << "max point second mass: " << MaxPointInt(arr1) << endl;
	cout << "min second mass: " << getMinInt(arr1) << endl;
	cout << "min point second mass: " << MinPointInt(arr1) << endl;
	
	cout << "third product of array elements: " << ProdArrInt(arr2) << endl;
	cout << "max third mass: " << getMaxInt(arr2) << endl;
	cout << "max point third mass: " << MaxPointInt(arr2) << endl;
	cout << "min third mass: " << getMinInt(arr2) << endl;
	cout << "min point third mass: " << MinPointInt(arr2) << endl;
}

void fillArrayInt(int* arr)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 - 5;
	}
}

void showArrayInt(int* arr)
{
	cout << "ArrayInt\n";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}

int getMaxInt(int* arr)
{
	int max = arr[0];
	for (size_t i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int getMinInt(int* arr)
{
	int min = arr[0];
	for (size_t i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int MaxPointInt(int* arr)
{
	int max = arr[0];
	int point;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			point = i;
		}
	}
	return point;
}

int MinPointInt(int* arr)
{
	int min = arr[0];
	int point;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			point = i;
		}
	}
	return point;
}

double ProdArrInt(int* arr)
{
	double prod = 1;
	for (int i = 0; i < SIZE; i++)
	{
		prod *= arr[i];

	}
	return prod;
}