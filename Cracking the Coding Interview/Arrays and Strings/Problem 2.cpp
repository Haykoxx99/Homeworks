#include <iostream>
#include <string>

bool IsPermutation(std::string str1, std::string str2)
{
	if (str1.size() != str2.size())
	{
		return false;
	}
	for (int i = 0; i < str1.size() - 1; ++i)
	{
		for (int j = i + 1; j < str1.size(); ++j)
		{
			if (str1[i] > str1[j])
			{
				std::swap(str1[i], str1[j]);
			}
			if (str2[i] > str2[j])
			{
				std::swap(str2[i], str2[j]);
			}
		}
	}
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] != str2[i])
		{
			return false;
		}
	}
	return true;
}