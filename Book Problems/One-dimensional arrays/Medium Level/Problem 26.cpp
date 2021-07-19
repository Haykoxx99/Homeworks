//Two arrays of real numbers with 12 elements each are given.
//Replace with zeros those elements of the first array that
//are in the second
#include <iostream>
#include <ctime>

void Problem26()
{
	srand(time(NULL));
	const int size = 12;
	int firstArr[size],secondArr[size];
	for (int i = 0; i < size; i++)
	{
		firstArr[i] = rand() % 10;
		if (rand() % 10 < 4)
		{
			firstArr[i] *= -1;
		}
		std::cout << firstArr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		secondArr[i] = rand() % 10;
		if (rand() % 10 < 4)
		{
			secondArr[i] *= -1;
		}
		std::cout << secondArr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (secondArr[i] == firstArr[j])
			{
				firstArr[j] = 0;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << firstArr[i] << ' ';
	}
	std::cout << std::endl;
}