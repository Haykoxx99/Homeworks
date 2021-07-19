//In the given integer array, remove elements that occur more than two times.
#include <iostream>
#include <ctime>

void Problem21()
{
	srand(time(NULL));
	const int size = 15;
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
	int newSize = size;
	for (int i = 0; i < newSize - 1; i++)
	{
		for (int j = i + 1; j < newSize; j++)
		{
			if (arr[i] == arr[j])
			{
				for (int k = i; k < newSize - 1; k++)
				{
					arr[k] = arr[k + 1];
				}
				--newSize;
				for (int k = j - 1; k < newSize - 1; k++)
				{
					arr[k] = arr[k + 1];
				}
				--newSize;
				i -= 2;
				break;
			}
		}
	}
	for (int i = 0; i < newSize; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}