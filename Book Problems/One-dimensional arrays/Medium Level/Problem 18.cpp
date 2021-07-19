//Determine the number of local maxima in a given numeric array. 
//(The local maximum in a numeric array is a sequence of three 
//adjacent numbers, in which the average number is greater than 
//those on the left and right of it).
#include <iostream>
#include <ctime>

void Problem18(int size)
{
	srand(time(NULL));
	int* arr = new int[size];
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
	for (int i = 1; i < size - 2; i++)
	{
		if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
		{
			++count;
		}
	}
	std::cout << "Count of local maximums is " << count << std::endl;
	delete[] arr;
}