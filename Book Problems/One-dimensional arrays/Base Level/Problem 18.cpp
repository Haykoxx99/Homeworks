//Introduce an array with 12 valid elements.
//Determine the boundaries of the interval in 
//which the values of the array elements are located.
#include <iostream>
#include <ctime>


void Problem18()
{
	srand(time(NULL));
	const int size = 12;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int maxElement = arr[0];
	int minElement = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (maxElement < arr[i])
		{
			maxElement = arr[i];
		}
		if (minElement > arr[i])
		{
			minElement = arr[i];
		}
	}
	std::cout << '[' << minElement << ';' << maxElement << ']' << std::endl;
}