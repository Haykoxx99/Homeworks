//In an array of integers with 19 elements, determine 
//the maximum number and replace all even elements with it.
#include <iostream>
#include <ctime>


void Problem27()
{
	srand(time(NULL));
	const int size = 19;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (rand() % 10 < 4)
		{
			arr[i] *= -1;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int maxElement = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > maxElement)
		{
			maxElement = arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] = maxElement;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}