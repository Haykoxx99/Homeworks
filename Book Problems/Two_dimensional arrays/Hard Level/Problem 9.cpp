//You are given an integer square matrix of order N. Rearrange rows
//matrices so that their last elements are arranged in the order not
//plants.Sort by count.
#include <iostream>
#include <utility>
#include <vector>
#include <ctime>

template <typename T>
void foo(T** arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[min][size - 1] < arr[j][size - 1])
			{
				min = j;
			}
		}
		std::swap(arr[min], arr[i]);
	}
}