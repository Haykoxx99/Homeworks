//Introduce an array with 12 valid elements. 
//Arrange items in descending order. 
//Calculate the sum of the maximum and minimum elements of the array.
#include <iostream>
#include <ctime>


void Problem12()
{
	srand(time(NULL));
	const int size = 14;
	int arr[size];
	int countOfEvenNumbers = 0;
	int sumOfEvenNumbers = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[i] < arr[j])
			{
				std::swap(arr[i], arr[j]);
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl << "Sum of max and min elements is " << arr[0] + arr[size - 1] << std::endl;
}