//An array of real numbers is given. Determine the array element
//(value and index) that is farthest from the given real number S
#include <iostream>
#include <ctime>

void Problem15(int size, int value)
{
	srand(time(NULL));
	double* arr = new double[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	double* rangeArr = new double[size];
	for (int i = 0; i < size; i++)
	{
		rangeArr[i] = std::abs(arr[i]) - value;
	}
	int index = 0;
	double val = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (rangeArr[i] < rangeArr[index])
		{
			index = i;
			val = arr[i];
		}
	}
	std::cout << "Index is " << index << std::endl;
	std::cout << "Value is " << val << std::endl;
	delete[] rangeArr;
	delete[] arr;
}