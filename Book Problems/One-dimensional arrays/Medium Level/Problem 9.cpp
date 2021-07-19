#include <iostream>
#include <cmath>
#include <ctime>

void Problem9()
{
	srand(time(NULL));
	const int size = 15;
	int X[size], Y[size], Z[size + size];
	for (int i = 0; i < size; i++)
	{
		X[i] = rand() % 100;
		Z[i] = X[i];
		std::cout << X[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			Y[i] = std::cos(std::pow(X[i], 2)) + 2.97;
			Z[i + 15] = Y[i];
			std::cout << Y[i] << ' ';
			continue;
		}
		Y[i] = std::cos(std::pow(X[i], 2)) + 2.97 * std::pow(std::log(std::pow(i, 2)), 2);
		Z[i + 15] = Y[i];
		std::cout << Y[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size + size; i++)
	{
		for (int j = 0; j < size + size; j++)
		{
			if (Z[i] > Z[j])
			{
				std::swap(Z[i], Z[j]);
			}
		}
	}
	for (int i = 0; i < size + size; i++)
	{
		std::cout << Z[i] << ' ';
	}
	std::cout << std::endl;
}