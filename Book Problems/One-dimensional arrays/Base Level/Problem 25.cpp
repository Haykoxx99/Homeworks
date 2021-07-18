//You are given an array of 15 integer elements(positive and negative).
//Get a new array, the elements of which are determined as the difference 
//between the elements of the original array and the sum of positive elements 
//of the given array.
#include <iostream>
#include <ctime>


void Problem25()
{
	srand(time(NULL));
	const int size = 15;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (rand() % 10 < 4)
		{
			arr[i] *= -1;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int sumOfPositiveNumbers = 0;
	int NewArray[size];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			sumOfPositiveNumbers += arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		NewArray[i] = sumOfPositiveNumbers - arr[i];
		std::cout << NewArray[i] << ' ';
	}
	std::cout << std::endl;
}