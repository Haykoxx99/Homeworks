#include <iostream>

template <typename T>
void foo(T** arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (i == size / 2 || j == size / 2)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = 0;
			}
		}
	}
}