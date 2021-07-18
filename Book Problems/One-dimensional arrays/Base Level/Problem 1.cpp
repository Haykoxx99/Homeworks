//Introduce an array of 14 integer elements.
//Find the number of elements that are even by value.
#include <iostream>
#include <ctime>

void Problem1()
{
	srand(time(NULL));
	int arr[14];
	int count = 0;
	for (int i = 0; i < 14; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] % 2 == 0)
		{
			++count;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl << count << "Elements that are even by value" << std::endl;
}