//In a given integer array R (9), determine the index of the
//largest of the odd-by-value positive elements.
#include <iostream>
#include <ctime>

void Problem8()
{
	srand(time(NULL));
	const int size = 9;
	int R[size];
	for (int i = 0; i < size; i++)
	{
		R[i] = rand() % 100;
		std::cout << R[i] << ' ';
	}
	std::cout << std::endl;
	int MaxPositiveOddNumberIndex = -1;
	for (int i = 0; i < size; i++)
	{
		if (MaxPositiveOddNumberIndex == -1 && R[i] % 2 == 1)
		{
			MaxPositiveOddNumberIndex = i;
		}
		if (MaxPositiveOddNumberIndex != -1 && R[i] % 2 == 1 && R[MaxPositiveOddNumberIndex] < R[i])
		{
			MaxPositiveOddNumberIndex = i;
		}
		
	}
	std::cout << "Index of maximum positive odd number is " << MaxPositiveOddNumberIndex << std::endl;
}