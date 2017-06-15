#pragma once
#include <string>
#include <iostream>
#include <random>
#include <time.h>
#include <algorithm>

using namespace std;

int maxSubLenghtcsRec(string first, int lenght_1, string second, int lenght_2)
{
	int result = 0;
	if (lenght_1 > 0 && lenght_2 > 0)
	{
		if (first[lenght_1 - 1] == second[lenght_2 - 1])
		{
			result = 1 + maxSubLenghtcsRec(first, lenght_1 - 1, second, lenght_2 - 1);
		}
		else
		{
			result = max(maxSubLenghtcsRec(first, lenght_1, second, lenght_2 - 1), maxSubLenghtcsRec(first, lenght_1 - 1, second, lenght_2));
		}
	}
	return result;
}