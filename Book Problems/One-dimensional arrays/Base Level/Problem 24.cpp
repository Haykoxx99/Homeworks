//Introduce an array with 12 valid elements. Determine the 
//number and sum of numbers whose values are less than the 
//value of the last element
#include <iostream>
#include <ctime>


void Problem24()
{
	srand(time(NULL));
	const int size = 12;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int sumOfElementsLessThanLast = 0;
	int countOfElementsLessThanLast = 0;
	for (int i = 0; i < size - 2; i++)
	{
		if (arr[i] < arr[size - 1])
		{
			sumOfElementsLessThanLast += arr[i];
			++countOfElementsLessThanLast;
		}
	}
	std::cout << "Sum of elements less than last element is equal to " << sumOfElementsLessThanLast << std::endl;
	std::cout << "Count of elements less than last element is equal to " << countOfElementsLessThanLast << std::endl;
}