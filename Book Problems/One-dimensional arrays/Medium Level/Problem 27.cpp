//An integer array is specified. Determine the number of sections of the array
//on which the elements increase monotonically (each next number is greater 
//than the previous one).
#include <iostream>
#include <ctime>

void Problem27()
{
	srand(time(NULL));
	const int size = 15;
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
	int count = 0;
	for (int i = 0; i < size - 1; ++i)
	{
		if (arr[i] < arr[i + 1])
		{
			++count;
			while (arr[i] < arr[i + 1] && i <= size - 1)
			{
				++i;
			}
		}
	}
	std::cout << "Count = " << count << std::endl;
}