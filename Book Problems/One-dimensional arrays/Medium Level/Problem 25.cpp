//Introduce an array of 15 integer elements. Order the array so that all
//negative numbers are in ascending order at the beginning, and all 
//positive numbers are in descending order at the end.
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
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				std::swap(arr[i], arr[j]);
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			for (int j = i; j < size - 1; j++)
			{
				for (int k = j + 1; k < size; k++)
				{
					if (arr[j] < arr[k])
					{
						std::swap(arr[j], arr[k]);
					}
				}
			}
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}