//You are given an N × M matrix consisting of natural numbers. Select in rows
//leftmost smallest itemsand put them in the first column.
#include <iostream>
#include <utility>
#include <vector>
#include <ctime>

template <typename T>
void foo(T** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = 0;
		for (int j = 1; j < size; j++)
		{
			if (arr[i][min] > arr[i][j])
			{
				min = j;
			}
		}
		std::swap(arr[i][0], arr[i][min]);
	}
}