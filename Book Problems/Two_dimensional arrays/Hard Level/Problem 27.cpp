//An NxM matrix is given. Consider strings similar if they match
//the sets of numbers that appear in these lines.Find the number
//of lines, similar to the first.
#include <iostream>

template <typename T>
int foo(T** arr, int row, int column)
{
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			for (int k = j + 1; k < column; k++)
			{
				if (arr[i][j] > arr[i][k])
				{
					std::swap(arr[i][j], arr[i][k]);
				}
			}
		}
	}
	for (int i = 1; i < row; i++)
	{
		int tempCount = 0;
		int k = 0;
		for (int j = 0; j < column && k < column;)
		{
			if (arr[0][j] < arr[i][k])
			{
				++j;
			}
			else if (arr[0][j] == arr[i][k])
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
		if (tempCount > column / 2)
		{
			++count;
		}
	}
	return count;
}