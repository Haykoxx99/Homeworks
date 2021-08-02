//You are given an N × N square matrix consisting of natural numbers. Zer-
//it is possible to perfectly reflect its elements relative to the side diagonal.Withdraw
//the result on the screen.
#include <iostream>
#include <ctime>

template <typename T>
void foo(T** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == (size - i - 1))
			{
				break;
			}
			std::swap(arr[i][j], arr[size - j - 1][size - i - 1]);
		}
	}
}