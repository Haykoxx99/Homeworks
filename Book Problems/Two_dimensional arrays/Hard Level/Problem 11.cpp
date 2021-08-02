//You are given a matrix of order n × m, all elements of which are different. In each
//row, the element with the smallest value is selected, then among these
//the largest number is selected.Specify the indices of the element with the found
//value.
#include <iostream>
#include <utility>
#include <vector>
#include <ctime>

template <typename T>
void foo(T** arr, int row, int column)
{
	std::vector<std::pair<int, int>> vec;
	for (int i = 0; i < row; i++)
	{
		int k = 0;
		for (int j = 1; j < column; j++)
		{
			if (arr[i][j] < arr[i][k])
			{
				k = j;
			}
		}
		vec.push_back(std::make_pair(i, k));
	}
	int first = vec[0].first;
	int second = vec[0].second;
	for (int i = 1; i < row; i++)
	{
		if (arr[first][second] > arr[vec[i].first][vec[i].second])
		{
			first = vec[i].first;
			second = vec[i].second;
		}
	}
	std::cout << '[' << first << ',' << second << ']' << std::endl;
}