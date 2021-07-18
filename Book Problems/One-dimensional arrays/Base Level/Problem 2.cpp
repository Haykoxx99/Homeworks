//Introduce an array of 12 integer elements.
//Get a new array by replacing the value of 
//the fifth element with the arithmetic mean 
//of the original array.
#include <iostream>
#include <ctime>

void Problem2()
{
	srand(time(NULL));
	int arr[12];
	for (int i = 0; i < 12; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < 12; i++)
	{
		if (i == 4)
		{
			continue;
		}
		arr[4] += arr[i];
	}
	arr[4] /= 12;
	for (int i = 0; i < 12; i++)
	{
		std::cout << arr[i] << ' ';
	}
}