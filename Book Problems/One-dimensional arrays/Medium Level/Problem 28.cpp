//An integer array is specified. Determine the remainder of dividing the sum of
//elements with even indices by the sum of elements with odd indices.
#include <iostream>
#include <ctime>

void Problem28()
{
	srand(time(NULL));
	const int size = 15;
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
	int sumOfEvenIndexes = 0;
	int sumOfOddIndexes = 0;
	for (int i = 0; i < size - 1; ++i)
	{
		if (i % 2 == 0)
		{
			sumOfEvenIndexes += arr[i];
		}
		else
		{
			sumOfOddIndexes += arr[i];
		}
	}
	std::cout << "Reminder = " << sumOfEvenIndexes % sumOfOddIndexes << std::endl;
}