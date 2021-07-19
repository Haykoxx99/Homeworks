//Enter an integer array consisting of 17 elements(two - digit integers).
//Calculate the sum of the digits of this array
#include <iostream>
#include <ctime>

void Problem3()
{
	srand(time(NULL));
	int const size = 17;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	std::cout << "Sum = " << sum << std::endl;
}