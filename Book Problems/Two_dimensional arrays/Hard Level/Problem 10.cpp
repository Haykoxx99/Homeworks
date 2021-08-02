//You are given a 5 × 10 matrix. Display the number of columns, elements
//which decrease monotonically.
#include <iostream>
#include <utility>
#include <vector>
#include <ctime>

template <typename T>
int foo(T** arr, int row,int column)
{
	int count = 0;
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row - 1; j++)
		{
			if (arr[j][i] < arr[j + 1][i])
			{
				break;
			}
			if (j + 1 == row - 1)
			{
				++count;
			}
		}
	}
	return count;
}