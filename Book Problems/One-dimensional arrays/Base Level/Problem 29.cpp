//You are given an array of 18 valid elements.Determine the quotient 
//of dividing the product of all positive elements and the sum of the 
//absolute values of all negative
#include <iostream>
#include <ctime>


void Problem29()
{
	srand(time(NULL));
	const int size = 18;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		if (rand() % 10 < 4)
		{
			arr[i] *= -1;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int productOfPositive = 1;
	int sumOfNegative = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			productOfPositive *= arr[i];
		}
		else
		{
			sumOfNegative += arr[i];
		}
	}
	sumOfNegative *= -1;
	std::cout << productOfPositive / sumOfNegative << std::endl;
}
