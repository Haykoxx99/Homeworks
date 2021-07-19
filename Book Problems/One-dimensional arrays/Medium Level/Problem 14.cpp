//Introduce an array with 14 valid elements. Swap the first half with 
//the second. Determine the number of permutations made in this case.
#include <iostream>
#include <ctime>

void Problem14()
{
	srand(time(NULL));
	const int size = 14;
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
	for (int i = 0; i < size/2; i++)
	{
		std::swap(arr[i], arr[i + (size/2)]);
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << "Number of permutations is equal to " << size / 2 << std::endl;
}