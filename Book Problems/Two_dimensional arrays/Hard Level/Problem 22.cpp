//You are given a square array of n rows and n columns. Necessary for the elements
//located on the main diagonal from the upper left corner to the lower right(that 
//is, those elements A[i][j] for which i = j) assign - value 1, to the elements 
//located above the main diagonal - value 0, elements below the main diagonal - 
//value 2, that is, to get an array like this (example for n == 4) :
#include <iostream>

template <typename T>
void foo(T** arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (j < i)
			{
				arr[i][j] = 2;
			}
			else if (j > i)
			{
				arr[i][j] = 0;
			}
			else if (i == j)
			{
				arr[i][j] = 1;
			}
		}
	}
}