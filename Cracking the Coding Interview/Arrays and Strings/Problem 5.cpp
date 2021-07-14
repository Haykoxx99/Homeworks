#include <iostream>
#include <string>
bool OneEdit(std::string first, std::string second)
{
	int difference = first.size() - second.size();
	if (difference < 0) difference *= -1;
	if (difference != 1 && difference != 0)
	{
		return false;
	}
	else if (difference == 1 || difference == -1)
	{
		for (int i = 0; i < first.size(); ++i)
		{
			for (int j = 0; j < second.size(); ++j)
			{
				if (first[i] == second[j])
				{
					first[i] = '0';
					second[j] = '0';
				}
			}
		}
		int count = 0;
		for (int i = 0; i < first.size() || i < second.size(); ++i)
		{
			if (i < first.size())
			{
				if (first[i] != '0')
				{
					++count;
				}
			}
			if (i < second.size())
			{
				if (second[i] != '0')
				{
					++count;
				}
			}
		}
		return count == 1;
	}
	else if (first.size() == second.size())
	{
		bool ifik = false;
		for (int i = 0; i < first.size(); i++)
		{
			if (first[i] != second[i])
			{
				if (ifik)
				{
					return false;
				}
				ifik = true;
			}
		}
		return true;
	}
}