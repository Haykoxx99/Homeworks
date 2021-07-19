#include <iostream>
#include <ctime>

void Problem23()
{
	srand(time(NULL));
	const int size = 10;
	int X[size],Y[size];
	for (int i = 0; i < size; i++)
	{
		X[i] = rand() % 5 + 1;
		std::cout << X[i] << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		Y[i] = std::pow(X[i], 2) + 0.3;
		std::cout << Y[i] << ' ';
	}
	std::cout << std::endl;
	long long int numerator = 1;
	long long int denominator = 1;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			denominator = (long long)(denominator * X[i] * Y[i]);
		}
		else
		{
			numerator = (long long)(numerator * X[i] * Y[i]);
		}
	}
	long long int P = numerator / denominator;
	long long int residual = numerator % denominator;
	std::cout << "P = " << P << std::endl;
	std::cout << "Residual = " << residual << std::endl;
}
