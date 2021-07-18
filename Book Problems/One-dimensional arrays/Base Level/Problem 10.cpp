//Enter an integer array with 17 elements (positive and negative). 
//Find the sum of elements, the absolute value of which is greater
//than the arithmetic mean of the absolute value of negative elements.
#include <iostream>
#include <ctime>


void Problem10()
{
	srand(time(NULL));
	int arr[17];
	int arithmeticAverage = 0;
	int countOfNegativeNumbers = 0;
	for (int i = 0; i < 17; i++)
	{
		arr[i] = rand() % 100;
		if (rand() % 10 > 5)
		{
			arr[i] *= -1;
		}
		if (arr[i] < 0)
		{
			arithmeticAverage += arr[i];
			++countOfNegativeNumbers;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	arithmeticAverage /= countOfNegativeNumbers;
	int sumOfGreaterNumbers = 0;
	for (int i = 0; i < 17; i++)
	{
		if (arithmeticAverage < arr[i])
		{
			sumOfGreaterNumbers += arr[i];
		}
	}
	std::cout << sumOfGreaterNumbers << std::endl;
}