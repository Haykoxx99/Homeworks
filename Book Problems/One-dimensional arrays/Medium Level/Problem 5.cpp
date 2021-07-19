//Enter two arrays X and Y, consisting of 10 integer elements.
//Form an array S, consisting of identical elements of the original arrays
#include <iostream>
#include <ctime>

void Problem5()
{
	srand(time(NULL));
	const int size = 10;
	int X[size], Y[size];
	for (int i = 0; i < size; i++)
	{
		X[i] = rand() % 100;
		std::cout << X[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		Y[i] = rand() % 100;
		std::cout << Y[i] << ' ';
	}
	std::cout << std::endl;
	int NewArray[10]{};
	for (int i = 0, index = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (X[i] == Y[j])
			{
				NewArray[index++] = X[i];
				break;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << NewArray[i] << ' ';
	}
	std::cout << std::endl;
}