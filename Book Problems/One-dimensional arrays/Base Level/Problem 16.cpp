//Introduce an array with 12 valid elements.
//Determine the number of numbers between the 
//maximum and minimum elements.
#include <iostream>
#include <ctime>


void Problem16()
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
	int maxElementIndex = 0;
	int minElementIndex = 0;
	for (int i = 1; i < size; i++)
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
	std::cout << arr[maxElementIndex] << ' ' << arr[minElementIndex] << std::endl;
	std::cout << (maxElementIndex > minElementIndex?maxElementIndex - minElementIndex - 1:minElementIndex - maxElementIndex - 1) << std::endl;
}