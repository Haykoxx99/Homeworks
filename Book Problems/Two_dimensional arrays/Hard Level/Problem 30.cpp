#include <iostream>

template <typename T>
void foo(T** arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((i == 1 && j == 2) || (i == 2 && j == 1) || (i == 2 && j == 3) || (i == 3 && j == 2))
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