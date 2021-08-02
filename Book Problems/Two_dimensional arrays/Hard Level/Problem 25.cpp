#include <iostream>

template <typename T>
void foo(T** arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if ((i == 1 && j == 0) || (i == 1 && j == 4) || (i == 2 && j == 2) || (i == 3 && j == 0) || (i == 3 && j == 4))
			{
				arr[i][j] = 0;
			}
			else
			{
				arr[i][j] = 1;
			}
		}
	}
}