//Introduce an array with 12 valid elements. Arrange items in descending order.
//Determine the number of permutations that occurred in this case
#include <iostream>
#include <ctime>

void Problem12()
{
	srand(time(NULL));
	const int size = 12;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j  < size; j ++)
		{
			if (arr[i] > arr[j])
			{
				std::swap(arr[i], arr[j]);
				++count;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl << "Count = " << count << std::endl;
}