//You are given a square matrix. Form a one-dimensional array consisting of
//from the elements located below the main diagonal of the matrix.Execute
//thread sorting a one - dimensional array.Output matrix, one - dimensional
//array before sorting, one - dimensional array after sorting.
#include <iostream>
#include <ctime>

int Partition(int* arr, int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			std::swap(arr[++i], arr[j]);
		}
	}
	std::swap(arr[i + 1], arr[high]);
	return i + 1;
}

void QuickSort(int* arr, int low, int high)
{
	if (low < high)
	{
		int pi = Partition(arr, low, high);
		QuickSort(arr, low, pi - 1);
		QuickSort(arr, pi + 1, high);
	}
}

int* RetArr(int** array, int size)
{
	int newSize = (size * size / 2) - (size / 2);
	int* temp = new int[newSize] {};
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				break;
			}
			temp[index++] = array[i][j];
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < newSize; i++)
	{
		std::cout << temp[i] << ' ';
	}
	std::cout << std::endl;
	QuickSort(temp, 0, newSize - 1);
	std::cout << std::endl;
	for (int i = 0; i < newSize; i++)
	{
		std::cout << temp[i] << ' ';
	}
	std::cout << std::endl;
	return temp;
}
