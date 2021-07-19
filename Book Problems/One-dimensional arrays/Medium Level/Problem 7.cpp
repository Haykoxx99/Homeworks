//An array of real numbers Z (16) is given. Determine the difference between
//the sum of elements with even indices and the sum of elements whose indices
//are multiples of three
#include <iostream>
#include <ctime>

void Problem7()
{
	srand(time(NULL));
	const int size = 16;
	int Z[size];
	int sumOfEvenIndexes = 0;
	int sumOfMultiplesOfThree = 0;
	for (int i = 0; i < size; i++)
	{
		Z[i] = rand() % 100;
		if (i % 2 == 0)
		{
			sumOfEvenIndexes += Z[i];
		}
		if (i % 3 == 0)
		{
			sumOfMultiplesOfThree += Z[i];
		}
		std::cout << Z[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << sumOfEvenIndexes - sumOfMultiplesOfThree << std::endl;
}