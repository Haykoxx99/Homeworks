//Enter two arrays of real numbers with 9 and 7 elements.
//Form the third array from the ascending values of both arrays
#include <iostream>
#include <ctime>

void Problem4()
{
	srand(time(NULL));
	int firstArr[9], secondArr[7];
	for (int i = 0; i < 9; i++)
	{
		firstArr[i] = rand() % 100;
		std::cout << firstArr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < 7; i++)
	{
		secondArr[i] = rand() % 100;
		std::cout << secondArr[i] << ' ';
	}
	std::cout << std::endl;
	int NewArray[16];
	for (int i = 0; i < 16; i++)
	{
		if (i < 9)
		{
			NewArray[i] = firstArr[i];
		}
		else
		{
			NewArray[i] = secondArr[i - 9];
		}
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = i + 1; j < 16; j++)
		{
			if (NewArray[i] > NewArray[j])
			{
				std::swap(NewArray[i], NewArray[j]);
			}
		}
	}
	for (int i = 0; i < 16; i++)
	{
		std::cout << NewArray[i] << ' ';
	}
	std::cout << std::endl;
}