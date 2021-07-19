//Enter an array of 8 elements(eight two - digit numbers) of integer type.
//Get a new array of the least significant digits in the original array.
#include <iostream>
#include <ctime>

void Problem2()
{
	srand(time(NULL));
	int const size = 8;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int NewArray[size];
	for (int i = 0; i < size; i++)
	{
		NewArray[i] = arr[i] % 10;
		std::cout << NewArray[i] << ' ';
	}
	std::cout << std::endl;
}