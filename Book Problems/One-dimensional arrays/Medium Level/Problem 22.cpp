//Introduce an array of 10 integer elements. Form a new one by placing 
//first all negative elements and zeros, after which - positive ones,
//keeping their order.
#include <iostream>
#include <ctime>

void Problem22()
{
	srand(time(NULL));
	const int size = 10;
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
	int index = 0;
	int NewArray[size]{};
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			NewArray[index++] = arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			NewArray[index++] = arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			NewArray[index++] = arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << NewArray[i] << ' ';
	}
	std::cout << std::endl;
}