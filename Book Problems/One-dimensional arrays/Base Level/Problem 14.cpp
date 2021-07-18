//Enter an integer array with 17 elements. 
//Replace elements that are multiples of three 
//with the sum of elements that are odd in value.
#include <iostream>
#include <ctime>


void Problem14()
{
	srand(time(NULL));
	const int size = 17;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int sumOfOddNumbers = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1)
		{
			sumOfOddNumbers += arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 3 == 0)
		{
			arr[i] = sumOfOddNumbers;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}