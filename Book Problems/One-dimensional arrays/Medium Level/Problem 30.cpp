//Enter two arrays of real numbers. Determine the maximum
//elements in each array and swap them.
#include <iostream>
#include <ctime>

void Problem30()
{
	srand(time(NULL));
	const int size = 14;
	int firstArr[size], secondArr[size];
	for (int i = 0; i < size; i++)
	{
		firstArr[i] = rand() % 100;
		if (rand() % 10 < 4)
		{
			firstArr[i] *= -1;
		}
		std::cout << firstArr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		secondArr[i] = rand() % 100;
		if (rand() % 10 < 4)
		{
			secondArr[i] *= -1;
		}
		std::cout << secondArr[i] << ' ';
	}
	std::cout << std::endl;
	int firstMaxIndex = 0;
	int secondMaxIndex = 0;
	for (int i = 1; i < size; i++)
	{
		if (firstArr[firstMaxIndex] < firstArr[i])
		{
			firstMaxIndex = i;
		}
		if (secondArr[secondMaxIndex] < secondArr[i])
		{
			secondMaxIndex = i;
		}
	}
	std::swap(firstArr[firstMaxIndex], secondArr[secondMaxIndex]);
	std::cout << std::endl;
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
}
int main()
{
	Problem30();
	return 0;
}
