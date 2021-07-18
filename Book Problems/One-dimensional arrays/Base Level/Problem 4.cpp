//Enter an integer array with 10 elements.
//Swap the maximum and first elements.
#include <iostream>
#include <ctime>


void Problem4()
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
	for (int i = 1; i < 10; i++)
	{
		if (arr[maxElementIndex] < arr[i])
		{
			maxElementIndex = i;
		}
	}
	std::swap(arr[maxElementIndex], arr[0]);
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}