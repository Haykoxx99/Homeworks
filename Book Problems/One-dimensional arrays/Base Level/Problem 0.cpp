#include <iostream>
#include <ctime>

void Problem0()
{
	srand(time(NULL));
	int arr[14];
	for (int i = 0; i < 14; i++)
	{
		arr[i] = rand() % 10;
		std::cout << arr[i] << ' ';
	}
	int count_arr[14]{};
	int index = 0;
	for (int i = 0; i < 13; i++)
	{
		for (int j = i + 1; j < 14; j++)
		{
			if (arr[i] > arr[j])
			{
				std::swap(arr[i], arr[j]);
			}
		}
	}
	for (int i = 0; i < 14; i++)
	{
		if (count_arr[index] == 0 && arr[i] != arr[i + 1])
		{
			++count_arr[index];
			++index;
			continue;
		}
		if (arr[i] == arr[i + 1])
		{
			++count_arr[index];
		}
		else
		{
			++count_arr[index];
			++index;
		}
	}
	index = 0;
	std::cout << std::endl;
	for (int i = 0; i < 14 && count_arr[index]; ++i)
	{
		if (arr[i] != arr[i + 1])
		{
			std::cout << arr[i] << " - " << count_arr[index] << " pieces" << std::endl;
			++index;
		}
	}
}