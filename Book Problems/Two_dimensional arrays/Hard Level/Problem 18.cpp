//Given numbers n and m. Create an array int A [n] [m] and fill it with the following-
//snake(below is an example for n = 4 and m = 6) :
#include <iostream>

template <typename T>
void foo(T** arr, int row, int column)
{
	int number = 0;
	for (int i = 0; i < row; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < column; j++)
			{
				arr[i][j] = number++;
			}
		}
		else
		{
			for (int j = column - 1; j >= 0; --j)
			{
				arr[i][j] = number++;
			}
		}
	}
}