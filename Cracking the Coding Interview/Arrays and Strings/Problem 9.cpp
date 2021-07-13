#include <iostream>
#include <string>

bool isSubString(std::string first, std::string second)
{
	if (first.length() != second.length())
	{
		return false;
	}

	int length = first.length();
	bool ifik = true;
	bool stop = false;
	for (int i = 0; i < length; i++)
	{
		if (second[0] == first[i])
		{
			for (int j = i + 1, k = 1, f = 0; k < length; j++, k++)
			{
				if (k < length - i)
				{
					if (first[j] == second[k])
					{
						ifik = true;
					}
					else
					{
						ifik = false;
						break;
					}
				}
				else
				{
					stop = true;
					if (second[k] == first[f])
					{
						ifik = true;
						f++;
					}
					else
					{
						ifik = false;
						break;
					}
				}
			}

		}
		if (stop)
		{
			break;
		}
	}
	return ifik;
}
