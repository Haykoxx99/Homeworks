//Introduce an array of 14 integer elements. 
//Determine the sum of elements even in index 
//and the product of elements odd in value.
#include <iostream>
#include <ctime>


void Problem23()
{
	srand(time(NULL));
	const int size = 14;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int sumOfEvenIndexes = 0;
	int sumOfOddNumbers = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			sumOfEvenIndexes += arr[i];
		}
		if (arr[i] % 2 == 1)
		{
			sumOfOddNumbers += arr[i];
		}
	}
	std::cout << "Sum of numbers with even indexes is " << sumOfEvenIndexes << std::endl;
	std::cout << "Sum of odd numbers is " << sumOfOddNumbers << std::endl;
}