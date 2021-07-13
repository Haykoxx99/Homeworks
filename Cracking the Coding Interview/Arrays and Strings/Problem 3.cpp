#include <iostream>
#include <string>

void Replace(std::string& str)
{
	std::string temp;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			temp += "%20";
		}
		else
		{
			temp += str[i];
		}
	}
	str = temp;
}
