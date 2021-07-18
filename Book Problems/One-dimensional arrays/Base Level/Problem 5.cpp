//Enter an integer array with 9 elements.
//Swap the maximum and minimum elements of an array
#include <iostream>
#include <ctime>


void Problem5()
{
	srand(time(NULL));
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
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
	std::swap(arr[maxElementIndex], arr[minElementIndex]);
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}