#include <iostream>
#include <map>
#include <string>

bool PalidromePermutation(std::string str)
{
	std::map<char, int> temp;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		if (temp.find(str[i]) != temp.end())
		{
			++temp[str[i]];
		}
		else
		{
			temp.emplace(str[i], 1);
		}
	}
	short count = 0;
	for (auto it : temp)
	{
		if (it.second % 2 == 1)
		{
			++count;
		}
	}
	return count < 2;
}