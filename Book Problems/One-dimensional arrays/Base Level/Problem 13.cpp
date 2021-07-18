//Enter an integer array with 15 elements. Determine the
//sum and difference of the maximum and minimum elements.
#include <iostream>
#include <ctime>


void Problem13()
{
	srand(time(NULL));
	const int size = 15;
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
	std::cout << "Difference is " << maxElement - minElement << std::endl;
	std::cout << "Sum is " << maxElement + minElement << std::endl;
}