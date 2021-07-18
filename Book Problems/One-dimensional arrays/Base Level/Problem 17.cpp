//Introduce an array of 15 integer elements.
//Determine the number of negative, product 
//of positive and the number of zero elements
#include <iostream>
#include <ctime>


void Problem17()
{
	srand(time(NULL));
	const int size = 15;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (rand() % 10 < 5)
		{
			arr[i] *= -1;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int countOfNegative = 0;
	int productOfPositeve = 0;
	int countOfZero = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			++countOfNegative;
		}
		else if (arr[i] > 0)
		{
			productOfPositeve += arr[i];
		}
		else if (arr[i] == 0)
		{
			++countOfZero;
		}
	}
	std::cout << "Count of negative numbers " << countOfNegative << std::endl;
	std::cout << "Product of positive numbers " << productOfPositeve << std::endl;
	std::cout << "Count of zero " << countOfZero << std::endl;
}
