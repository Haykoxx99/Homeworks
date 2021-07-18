//An array of real numbers M (12) is given. 
//Determine the sum of the minimum element and its index.
#include <iostream>
#include <ctime>


void Problem30()
{
	srand(time(NULL));
	const int size = 12;
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
	int minNumber = arr[0];
	int indexOfMInNumber = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < minNumber)
		{
			minNumber = arr[i];
			indexOfMInNumber = i;
		}
	}
	std::cout << minNumber + indexOfMInNumber << std::endl;
}