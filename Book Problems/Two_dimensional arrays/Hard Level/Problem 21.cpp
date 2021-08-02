//You are given a two-dimensional array containing 8 rows and 8 columns. Elements
//array are integers.Sort array in ascending order elements of the side diagonal.
#include <iostream>
#include <vector>
#include <ctime>

template <typename T>
void foo(T** arr, int size)
{
	std::vector<T*> pointers;
	for (int i = 1; i < size; i++)
	{
		int flag = i;
		int first = 0;
		int second = i;
		while (first != flag + 1)
		{
			pointers.push_back(&arr[first][second]);
			++first;
			--second;
		}
		for (int i = 0; i < pointers.size() - 1; ++i)
		{
			int min = i;
			for (int j = i + 1; j < pointers.size(); ++j)
			{
				if (*pointers[j] < *pointers[min])
				{
					min = j;
				}
			}
			std::swap(*pointers[i], *pointers[min]);
		}
		pointers.clear();
	}
	for (int i = 1; i < size; i++)
	{
		int flag = size;
		int first = i;
		int second = size - 1;
		while (first != flag)
		{
			pointers.push_back(&arr[first][second]);
			++first;
			--second;
		}
		for (int i = 0; i < pointers.size() - 1; ++i)
		{
			int min = i;
			for (int j = i + 1; j < pointers.size(); ++j)
			{
				if (*pointers[j] < *pointers[min])
				{
					min = j;
				}
			}
			std::swap(*pointers[i], *pointers[min]);
		}
		pointers.clear();
	}
}