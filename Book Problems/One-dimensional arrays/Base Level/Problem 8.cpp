//An array i//An array is given, consisting of 16 elements of real type.
//Determine the indices (location) of the maximum and minimum elements
#include <iostream>
#include <ctime>


void Problem8()
{
	srand(time(NULL));
	double arr[16];
	for (int i = 0; i < 16; i++)
	{
		arr[i] = (rand() % 1000) / pow(10,rand() % 4);
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int maxElementIndex = 0;
	int minElementIndex = 0;
	for (int i = 1; i < 10; i++)
	{
		if (arr[maxElementIndex] < arr[i])
		{
			maxElementIndex = i;
		}
		if (arr[minElementIndex] > arr[i])
		{
			minElementIndex = i;
		}
	}
	std::cout << "Max Element index is " << maxElementIndex << std::endl;
	std::cout << "Min Element index is " << minElementIndex << std::endl;
}