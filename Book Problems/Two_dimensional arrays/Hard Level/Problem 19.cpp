//Given numbers n and m. Create an array int A [n] [m] and fill it with the following-
//snake(below is an example for n = 4 and m = 6) :
#include <iostream>

template <typename T>
void foo(T** arr, int row, int column)
{
	int number = 1;
	arr[0][0] = 0;
	for (int i = 1; i < row; i++)
	{
		int flag = i;
		int first = 0;
		int second = i;
		while (first != flag + 1)
		{
			arr[first][second] = number++;
			++first;
			--second;
		}
	}
	for (int i = row; i < column; i++)
	{
		int flag = row;
		int first = 0;
		int second = i;
		while (first != flag)
		{
			arr[first][second] = number++;
			++first;
			--second;
		}
	}
	for (int i = 1; i < row; i++)
	{
		int flag = row;
		int first = i;
		int second = column - 1;
		while (first != flag)
		{
			arr[first][second] = number++;
			++first;
			--second;
		}
	}
}