//You are given a number n and a square array int A [n] [n]. Check if
//the array is symmetrical about the main diagonal.
#include <iostream>

template <typename T>
void foo(T** arr, int row,int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (i == 0 || j == 0)
			{
				arr[i][j] = 1;
				continue;
			}
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
}