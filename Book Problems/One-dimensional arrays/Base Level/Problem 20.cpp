//Introduce an array of 16 integer elements. Replace 
//all elements that are multiples of three with zeros. 
//Determine the number of replacements.
#include <iostream>
#include <ctime>


void Problem20()
{
	srand(time(NULL));
	const int size = 16;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int countOfReplacement = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 3 == 0)
		{
			arr[i] = 0;
			++countOfReplacement;
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl << "Count of replacements is equal to " << countOfReplacement << std::endl;
}