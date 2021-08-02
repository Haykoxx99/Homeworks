//Develop a program that implements the processing of numerical two-dimensional
//an arbitrary array with three sorting methods(bubble, insertion, selection).
#include <iostream>
#include <ctime>

void TwoBubbleSort(int** arr, int row,int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			for (int k = i; k < row; k++)
			{
				int h;
				if (k == i)
				{
					h = j + 1;
				}
				else
				{
					h = 0;
				}
				for (; h < column; h++)
				{
					if (arr[i][j] > arr[k][h])
					{
						std::swap(arr[i][j], arr[k][h]);
					}
				}
			}
		}
	}
}
void TwoSelectionSort(int** arr, int row,int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			int x = i;
			int y = j;
			for (int k = i; k < row; k++)
			{
				int h;
				if (k == i)
				{
					h = j + 1;
				}
				else
				{
					h = 0;
				}
				for (; h < column; h++)
				{
					if (arr[x][y] > arr[k][h])
					{
						x = k;
						y = h;
					}
				}
			}
			std::swap(arr[i][j], arr[x][y]);
		}
	}
}
//int main()
//{
//	srand(time(NULL));
//	int size = 8;
//
//	int** arr = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = new int[size];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			arr[i][j] = rand() % 20;
//			std::cout << arr[i][j] << ' ';
//		}
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//    //TwoBubbleSort(arr, size, size);
//	//TwoSelectionSort(arr, size, size);
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			std::cout << arr[i][j] << ' ';
//		}
//		std::cout << std::endl;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//	return 0;
//}