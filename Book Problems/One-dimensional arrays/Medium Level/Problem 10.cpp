#include <iostream>
#include <cmath>
#include <ctime>

void Problem10()
{
	srand(time(NULL));
	const int size = 17;
	int X[size], Y[size], R[size];
	for (int i = 0; i < size; i++)
	{
		X[i] = rand() % 100;
		std::cout << X[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (std::cos(X[i]) > 0)
		{
			Y[i] = std::pow(X[i], 3) - 7.5;
		}
		else
		{
			Y[i] = std::pow(X[i], 2) - 5 * std::pow(2.7,std::sin(X[i]));
		}
		std::cout << Y[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (X[i] < X[j])
			{
				std::swap(X[i], X[j]);
			}
			if (Y[i] > Y[j])
			{
				std::swap(Y[i], Y[j]);
			}
		}
	}
	for (int i = 0; i < size - 1; i += 2)
	{
		R[i] = X[i];
		R[i + 1] = Y[i];
	}
	for (int i = 0; i < size - 1; i++)
	{
		std::cout << R[i] << ' ';
	}
	std::cout << std::endl;
}