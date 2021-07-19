//Enter two integer arrays - 10 elements each. Form a new array, in even places of which there
//will be elements with odd indices from the first array, and in odd places - with even indices from the second
#include <iostream>
#include <ctime>

void Problem1()
{
	srand(time(NULL));
	int const size = 10;
	int firstArr[size], secondArr[size];
	for (int i = 0; i < size; i++)
	{
		firstArr[i] = rand() % 100;
		secondArr[i] = rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << firstArr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << secondArr[i] << ' ';
	}
	std::cout << std::endl;
	int NewArray[size];
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			NewArray[i] = firstArr[i + 1];
		}
		else
		{
			NewArray[i] = secondArr[i - 1];
		}
		std::cout << NewArray[i] << ' ';
	}
	std::cout << std::endl;
}