//You are given an M × N integer matrix whose elements can
//take values from 0 to 100. Different rows of the matrix are called
//similar if the sets of numbers found in these
//lines.Find the number of lines similar to the first line of the given
//matrices.
#include <iostream>
#include <ctime>

template <typename T>
int CountOfSimilarRowsWithFirst(T** arr, int row, int column)
{
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		T* temp = arr[i];
		for (int i = 0; i < column - 1; i++)
		{
			int min = i;
			for (int j = i + 1; j < column; ++j)
			{
				if (temp[j] < temp[min])
				{
					min = j;
				}
			}
			std::swap(temp[i], temp[min]);
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