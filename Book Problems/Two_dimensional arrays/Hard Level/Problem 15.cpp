//Given number n. Create an array int A [n] [n], and fill it as follows
//th rule : the numbers on the diagonal going from the top right to the left
//the bottom corner is 1; the numbers above this diagonal are equal to 0;
//the numbers below this diagonal are 2.
#include <iostream>

template <typename T>
void foo(T** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				arr[i][j] = 0;
			}
			else if (j == (size - i - 1))
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = 2;
			}
		}
	}
}