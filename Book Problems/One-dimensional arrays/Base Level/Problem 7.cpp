//An array is given, consisting of 15 elements of real type.
//Determine the number of elements whose values are greater than the first element
#include <iostream>
#include <ctime>


void Problem7()
{
	srand(time(NULL));
	int arr[15];
	int count = 0;
	for (int i = 0; i < 15; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}	
	for (int i = 1; i < 15; i++)
	{
		if (arr[0] < arr[i])
		{
			++count;
		}
	}
	std::cout << std::endl << "Count = " << count << std::endl;
}
