//You are given an array of 15 integer elements.
//Get a new array as the difference between the 
//elements of the original array and its arithmetic mean.
#include <iostream>
#include <ctime>


void Problem9()
{
	srand(time(NULL));
	int arr[16];
	int arithmeticAverage = 0;
	for (int i = 0; i < 16; i++)
	{
		arr[i] = rand() % 100;
		arithmeticAverage += arr[i];
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	arithmeticAverage /= 16;
	int NewArray[16];
	for (int i = 0; i < 16; i++)
	{
		NewArray[i] = arithmeticAverage - arr[i];
		std::cout << NewArray[i] << ' ';
	}
	std::cout << std::endl;
}