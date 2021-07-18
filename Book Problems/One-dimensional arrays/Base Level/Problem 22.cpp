//An array M(15) of real numbers is given.
//Arrange the elements in reverse order.
#include <iostream>
#include <ctime>


void Problem22()
{
	srand(time(NULL));
	const int size = 15;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size/2; i++)
	{
		std::swap(arr[i], arr[size - i - 1]);
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}