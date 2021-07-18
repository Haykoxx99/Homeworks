//An array is given - 19 elements of integer type. 
//Find the sum of the elements located before the first 
//negative element. If there are no negative elements, 
//then issue an appropriate message
#include <iostream>
#include <ctime>


void Problem19()
{
	srand(time(NULL));
	const int size = 19;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (rand() % 10 < 5)
		{
			arr[i] *= -1;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int sumOfBeforeNegative = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			break;
		}
		if (i == size - 1 && i > 0)
		{
			std::cout << "There are no negative number." << std::endl;
			return;
		}
		sumOfBeforeNegative += arr[i];
	}
	std::cout << "Sum of numbers before negative number is " << sumOfBeforeNegative << std::endl;
}