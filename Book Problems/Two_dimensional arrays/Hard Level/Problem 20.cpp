//Print the array to the screen, allocating exactly 3 to the output of each number
//symbol.Given number n.Create an array int A[2 * n + 1][2 * n + 1] and fill
//its in a spiral starting from the number 0 in the central cell A[n][n].Spiral
//goes up, then twists counterclockwise.Print the array to the screen, allocating
//exactly 3 characters to the output of each number.Below an example is given for n = 2:
#include <iostream>

template <typename T>
void foo(T** arr, int size)
{
	int number = 1;
	int first = (size / 2);
	int second = (size / 2);
	arr[size / 2][size / 2] = 0;
	int index = 1;
	while (true)
	{
		if (index % 2 == 0)
		{
			for (int i = index; i > 0; --i)
			{
				arr[++first][second] = number++;
			}
			for (int i = index; i > 0; --i)
			{
				arr[first][++second] = number++;
			}
		}
		else
		{
			for (int i = index; i > 0; --i)
			{
				if (first == 0 && second == size - 1)
				{
					return;
				}
				arr[--first][second] = number++;
			}
			for (int i = index; i > 0; --i)
			{
				arr[first][--second] = number++;
			}
		}
		++index;
	}
}