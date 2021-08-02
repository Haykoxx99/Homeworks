//Find in each row of the matrix the coordinates of the element equal to k (if it
//there is).The search method is consistent with a barrier.
#include <iostream>
#include <utility>
#include <vector>
#include <ctime>

template <typename T>
std::vector<std::pair<int,int>> IndexesOfK(T** arr, int row, int column, int K)
{
	std::vector<std::pair<int, int>> temp;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (arr[i][j] == K)
			{
				temp.push_back(std::make_pair(i, j));
			}
		}
	}
	return temp;
}
