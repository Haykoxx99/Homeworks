#include <iostream>
#include <string>
bool IsUnique(std::string str)
{
	for (int i = 0; i < str.size() - 1; i++)
	{
		if (str[i] != str[i + 1])
		{
			return false;
		}
	}
	return true;
}