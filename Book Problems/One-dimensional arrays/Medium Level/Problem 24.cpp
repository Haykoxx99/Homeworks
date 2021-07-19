//Enter an array of 10 elements(ten two - digit numbers) of integer type.
//Get a new array, consisting of the differences of the digits of the elements
//of the original array
#include <iostream>
#include <ctime>

void Problem24()
{
	srand(time(NULL));
	const int size = 10;
	int firstArr[size], secondArr[size];
	for (int i = 0; i < size; i++)
	{
		firstArr[i] = rand() % 90 + 10;
		std::cout << firstArr[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		secondArr[i] = firstArr[i] % 10 - firstArr[i] / 10;
		std::cout << secondArr[i] << ' ';
	}
	std::cout << std::endl;
}