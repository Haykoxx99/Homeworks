//An NxM matrix (N> 2, M <10) is given. The elements of the matrix are
//numbers 0 and 1. Permitted operation - permutation of columns.Converting
//shape the matrix so that the first columns in it are the columns with 1 in
//the first row, then the columns with 1 in the second row(if any), etc.It is
//not allowed to introduce an additional matrix.
#include <iostream>

template <typename T>
void foo(T** arr, int row, int column)
{
	int count = 0;
	for (int i = 0; i < row; ++i)
	{
		for (int j = count; j < column; ++j)
		{
			if (arr[i][j] == 1)
			{
				++count;
				for (int h = 0; h < row; h++)
				{
					std::swap(arr[h][j], arr[h][count - 1]);
				}
			}
		}
	}
}