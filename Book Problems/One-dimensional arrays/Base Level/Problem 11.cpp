//Enter an integer array with 14 elements.Calculate the
//number and sum of even positive elements by value.
#include <iostream>
#include <ctime>


void Problem11()
{
	srand(time(NULL));
	const int size = 14;
	int arr[size];
	int countOfEvenNumbers = 0;
	int sumOfEvenNumbers = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (rand() % 10 > 5)
		{
			arr[i] *= -1;
		}
		if (arr[i] > 0 && arr[i] % 2 == 0)
		{
			++countOfEvenNumbers;
			sumOfEvenNumbers += arr[i];
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	std::cout << "Count of even positive numbers is " << countOfEvenNumbers << std::endl;
	std::cout << "Sum of even positive numbers is " << sumOfEvenNumbers << std::endl;
}