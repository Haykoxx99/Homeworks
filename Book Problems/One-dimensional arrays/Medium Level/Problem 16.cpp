//Enter an integer array with 10 elements.Determine the amount and 
//number of items located before the first negative number
#include <iostream>
#include <ctime>

void Problem16()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		if (rand() % 10 < 4)
		{
			arr[i] *= -1;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int amount = 0;
	int count = 0;
	for (int i = 0; arr[i] >= 0; i++)
	{
		if (i == size - 1 && arr[i] > 0)
		{
			amount = 0;
			count = 0;
			break;
		}
		amount += arr[i];
		++count;
	}
	std::cout << "Amount is " << amount << std::endl;
	std::cout << "Count is " << count << std::endl;
}