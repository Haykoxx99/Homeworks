//In a given array M (12) of real numbers, increase the
//minimum element three times and swap with the last one.
#include <iostream>
#include <ctime>


void Problem21()
{
	srand(time(NULL));
	const int size = 16;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int indexOfMinElement = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[indexOfMinElement])
		{
			indexOfMinElement = i;
		}
	}
	std::swap(arr[indexOfMinElement], arr[size - 1]);
	arr[size - 1] *= 3;
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}