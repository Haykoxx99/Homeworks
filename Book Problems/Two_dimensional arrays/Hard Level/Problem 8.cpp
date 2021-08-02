//Given an array A [3] [3]. Find a row with the minimum sum of elements,
//and multiply each element of the matrix by the minimum amount.
#include <iostream>
#include <utility>
#include <vector>
#include <ctime>

template <typename T>
void foo(T** arr, int row, int column)
{
	int min = 0;
	for (int i = 0; i < column; i++)
	{
		min += arr[0][i];
	}
	for (int i = 1; i < row; i++)
	{
		int tempMin = 0;
		for (int j = 0; j < column; j++)
		{
			tempMin += arr[i][j];
		}
		if (min > tempMin)
		{
			min = tempMin;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] *= min;
		}
	}
}