#include <iostream>
#include <string>
void Compress(std::string& str)
{
	std::string temp;
	int count = 1;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == str[i + 1])
		{
			count++;
		}
		else
		{
			temp += str[i] + std::to_string(count);
			count = 1;
		}
	}
	if (str.length() > temp.length())
	{
		str = temp;
	}
}
