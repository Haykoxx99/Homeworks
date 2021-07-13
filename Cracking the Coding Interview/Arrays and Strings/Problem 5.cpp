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
		if (first.find(second) || second.find(first))
		{
			return true;
		}
		else
		{
			return false;
		}
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