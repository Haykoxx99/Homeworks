//In a given numeric array, determine and display the indices of sequences of numbers
//that decrease monotonically (each next number is less than the previous one).
#include <iostream>
#include <ctime>

void Problem20()
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
	bool ifik = false;
	for (int i = 0; i <= size - 2;++i)
	{
		if (arr[i] > arr[i + 1])
		{
			std::cout << i << ' ';
			ifik = true;
		}
		else
		{
			if (ifik)
			{
				if (arr[i - 1] > arr[i])
				{
					std::cout << i << std::endl;
				}
				else
				{
					std::cout << std::endl;
				}
				ifik = false;
			}
		}
	}
	if (ifik)
	{
		std::cout << size - 1 << std::endl;
	}
}