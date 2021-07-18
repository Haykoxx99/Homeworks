//An integer array with 11 elements is specified. 
//Find the number of elements whose absolute value is greater than the arithmetic mean
#include <iostream>
#include <ctime>


void Problem3()
{
	srand(time(NULL));
	int arr[11];
	for (int i = 0; i < 11; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int arithmeticAverage = 0;
	for (int i = 0; i < 11; i++)
	{
		arithmeticAverage += arr[i];
	}
	arithmeticAverage /= 11;
	int count = 0;
	for (int i = 0; i < 11; i++)
	{
		if (arr[i] > arithmeticAverage)
		{
			++count;
		}
	}
	std::cout << "The arithmetic average is " << arithmeticAverage << std::endl;
	std::cout << "Count is " << count << std::endl;
}