//You are given a number n and a square array int A [n] [n]. Check if
//the array is symmetrical about the main diagonal.
#include <iostream>

template <typename T>
bool foo(T** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] != arr[j][i])
			{
				return false;
			}
		}
	}
	return true;
}