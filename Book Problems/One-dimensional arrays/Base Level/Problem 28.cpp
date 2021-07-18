//In an array of iEnter an integer array with 17 elements. 
//Find the sum and the number of elements, the absolute value 
//of which is greater than the arithmetic mean of positive elements.
#include <iostream>
#include <ctime>


void Problem28()
{
	srand(time(NULL));
	const int size = 17;
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
	int arithmeticAverage = 0;
	int countOfPositiveNumbers = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			arithmeticAverage += arr[i];
			++countOfPositiveNumbers;
		}
	}
	arithmeticAverage /= countOfPositiveNumbers;
	int sum = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > arithmeticAverage)
		{
			sum += arr[i];
			++count;
		}
	}
	std::cout << "Sum = " << sum << std::endl;
	std::cout << "Count = " << count << std::endl;
}