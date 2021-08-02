//An NxM matrix is given. Columns are considered similar if they match
//the sets of numbers found in these columns.Find quantity columns 
//similar to the last one.
#include <iostream>

template <typename T>
int foo(T** arr, int row, int column)
{
	int count = 0;
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			for (int k = j + 1; k < row; k++)
			{
				if (arr[j][i] > arr[k][i])
				{
					std::swap(arr[j][i], arr[k][i]);
				}
			}
		}
	}
	for (int i = 0; i < column - 1; i++)
	{
		int tempCount = 0;
		int k = 0;
		for (int j = 0; j < row && k < row;)
		{
			if (arr[j][column - 1] < arr[k][i])
			{
				++j;
			}
			else if (arr[j][column - 1] == arr[k][i])
			{
				++tempCount;
				++k;
				++j;
			}
			else
			{
				++k;
			}
		}
		if (tempCount > row / 2)
		{
			++count;
		}
	}
	return count;
}