//An integer array is specified. Determine the percentage of elements 
//that exceed the arithmetic mean of all elements of the array.
#include <iostream>
#include <ctime>

void Problem29()
{
	srand(time(NULL));
	const int size = 15;
	int arr[size];
	int arithmeticAverage = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (rand() % 10 < 4)
		{
			arr[i] *= -1;
		}
		arithmeticAverage += arr[i];
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	arithmeticAverage /= size;
	int count = 0;
	for (int i = 0; i < size ; ++i)
	{
		if (arithmeticAverage < arr[i])
		{
			++count;
		}
	}
	std::cout << "Percentage is " << (count * 100) / size << " %" << std::endl;
}