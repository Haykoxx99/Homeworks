//Introduce an array of 20 integer elements.
//Determine which elements are more even or odd by value
#include <iostream>
#include <ctime>


void Problem6()
{
	srand(time(NULL));
	int arr[10];
	int countOfEven = 0;
	int coutnOfOdd = 0;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] % 2 == 0)
		{
			++countOfEven;
		}
		else
		{
			++coutnOfOdd;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	if (countOfEven == coutnOfOdd)
	{
		std::cout << "Count of odd is equal of count of even." << std::endl;
	}
	else if (coutnOfOdd > countOfEven)
	{
		std::cout << "Count of odd is more than count of even." << std::endl;
	}
	else
	{
		std::cout << "Count of even is more than count of odd." << std::endl;
	}
}