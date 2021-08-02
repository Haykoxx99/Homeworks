#include <iostream>

template <typename T>
void foo(T** arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if ((i == 0 || i == size - 1) && j % 2 == 0)
			{
				arr[i][j] = 1;
			}
			else if ((i == 1 || i == size - 2) && j != size - 1 && j != 0)
			{
				arr[i][j] = 1;
			}
			else if (i == 2 && j != 2)
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