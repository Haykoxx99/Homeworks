//You are given an array of 15 valid elements. Determine the 
//difference between the product of all positive elements and 
//the product of the moduli of all negative
#include <iostream>
#include <ctime>


void Problem26()
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
	int sumOfNegativeNumbers = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			sumOfPositiveNumbers += arr[i];
		}
		else
		{
			sumOfNegativeNumbers += arr[i];
		}
	}
	sumOfNegativeNumbers *= -1;
	std::cout << (sumOfNegativeNumbers > sumOfPositiveNumbers ? sumOfNegativeNumbers - sumOfPositiveNumbers : sumOfPositiveNumbers - sumOfNegativeNumbers) << std::endl;
}