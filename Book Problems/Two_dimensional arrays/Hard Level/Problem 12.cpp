//Find the maximum among the elements of those columns that are ordered
//We are either ascending or descending.If the ordered pillar is
//there are no cells in the matrix, then output 0.
#include <iostream>
#include <utility>
#include <vector>
#include <ctime>

template <typename T>
T foo(T** arr, int row, int column)
{
	std::vector<T> vec;
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
				T max = arr[0][i];
				for (int k = 0; k < row; k++)
				{
					if (arr[k][i] > max)
					{
						max = arr[k][i];
					}
				}
				vec.push_back(max);
			}
		}
		for (int j = 0; j < row - 1; j++)
		{
			if (arr[j][i] > arr[j + 1][i])
			{
				break;
			}
			if (j + 1 == row - 1)
			{
				T max = arr[0][i];
				for (int k = 0; k < row; k++)
				{
					if (arr[k][i] > max)
					{
						max = arr[k][i];
					}
				}
				vec.push_back(max);
			}
		}
	}
	if (vec.size() == 0)
	{
		return NULL;
	}
	int max = vec[0];
	for (int i = 1; i < vec.size(); i++)
	{
		if (max < vec[i])
		{
			max = vec[i];
		}
	}
	return max;
}