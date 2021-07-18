//Introduce an array with 14 valid elements. 
//Arrange items 1 through 7 in ascending order,
//and items 8 through 14 in descending order.
#include <iostream>
#include <ctime>


void Problem15()
{
	srand(time(NULL));
	const int size = 17;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size - 1; i++)
	{
		if (i <= 6)
		{
			for (int j = i + 1; j < 6; j++)
			{
				if (arr[i] > arr[j])
				{
					std::swap(arr[i], arr[j]);
				}
			}
		}
		else if (i > 6)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (arr[i] < arr[j])
				{
					std::swap(arr[i], arr[j]);
				}
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}