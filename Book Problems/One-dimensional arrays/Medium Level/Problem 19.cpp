//In a given integer array Z (15) of positive, negative and zero numbers,
//determine the sum and output the sequence of values of the elements that
//are located between the first negative and zero elements.
#include <iostream>
#include <ctime>

void Problem19()
{
	srand(time(NULL));
	const int size = 15;
	int Z[size];
	for (int i = 0; i < size; i++)
	{
		Z[i] = rand() % 10;
		if (rand() % 10 < 4)
		{
			Z[i] *= -1;
		}
		std::cout << Z[i] << ' ';
	}
	std::cout << std::endl;
	int indexOfFirstOdd = -1;
	int indexOfFirstZero = -1;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (indexOfFirstOdd == -1 && Z[i] < 0)
		{
			indexOfFirstOdd = i;
		}
		else if (indexOfFirstZero == -1 && Z[i] == 0)
		{
			indexOfFirstZero = i;
		}
		if ((i + 1 == size && indexOfFirstOdd != -1 && indexOfFirstZero != -1) || (indexOfFirstOdd != -1 && indexOfFirstZero != -1))
		{
			int min;
			int max;
			if (indexOfFirstOdd > indexOfFirstZero)
			{
				min = indexOfFirstZero;
				max = indexOfFirstOdd;
			}
			else
			{
				min = indexOfFirstOdd;
				max = indexOfFirstZero;
			}
			for (int j = min + 1; j < max; j++)
			{
				sum += Z[j];
			}
			break;
		}
	}
	std::cout << "Sum = " << sum << std::endl;
}