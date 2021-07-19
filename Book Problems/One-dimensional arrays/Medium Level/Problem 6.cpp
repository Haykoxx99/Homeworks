#include <iostream>
#include <ctime>

void Problem6()
{
	const int size = 10;
	int firstArr[size], secondArr[size];
	int arithmeticAverage = 0;
	for (int i = 0; i < size; i++)
	{
		firstArr[i] = std::pow(i, 2) - (2.0 * i) + 19.3 * cos(i);
		arithmeticAverage += firstArr[i];
		std::cout << firstArr[i] << ' ';
	}
	std::cout << std::endl;
	arithmeticAverage /= 10;
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (firstArr[i] < arithmeticAverage)
		{
			secondArr[index++] = firstArr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (firstArr[i] >= arithmeticAverage)
		{
			secondArr[index++] = firstArr[i];
		}
		std::cout << secondArr[i] << ' ';
	}
	std::cout << std::endl;
}