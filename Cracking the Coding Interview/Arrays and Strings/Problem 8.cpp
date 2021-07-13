void ToZero(int** array, int row, int column)
{
	int* temp = new int[column];
	int index = 0;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			if (array[i][j] == 0)
			{
				for (int g = 0; g < column; ++g)
				{
					array[i][g] = 0;
				}
				temp[index] = j;
				++index;
				break;
			}
		}
	}
	for (int i = 0; i < column; i++)
	{
		if (i == 0 || temp[i] > 0)
		{
			for (int j = 0; j < row; j++)
			{
				array[j][temp[i]] = 0;
			}
		}
	}
}