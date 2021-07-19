//Enter from the keyboard an integer array consisting of 11 elements.
//Calculate the sum of odd-by-value negative elements and replace elements
//that are multiples of three by this sum.
#include <iostream>
#include <ctime>

void Problem13()
{
	srand(time(NULL));
	const int size = 11;
	int arr[size];
	int sumOfOddNumbers = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (rand() % 10 < 4)
		{
			arr[i] *= -1;
		}
		if (arr[i] < 0 && arr[i] % 2 == -1)
		{
			sumOfOddNumbers += arr[i];
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (i % 3 == 0)
		{
			arr[i] = sumOfOddNumbers;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}