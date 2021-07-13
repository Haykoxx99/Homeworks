#include <iostream>
#include <string>
int** Rotate(int** array, short size, std::string RL)
{
	int** temp = new int* [size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = new int[size];
	}
	if (RL == "left")
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				temp[i][j] = array[j][size - i - 1];
			}
		}
	}
	else if (RL == "right")
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				temp[i][j] = array[size - j - 1][i];
			}
		}
	}
	return temp;
}
