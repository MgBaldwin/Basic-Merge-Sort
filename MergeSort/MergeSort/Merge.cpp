#include "Merge.h"

std::string *MergeSort(std::string *argA, std::string *argB, int lenA, int lenB)
{
	std::string *result = new std::string[lenA + lenB];
	int posA = 0;
	int posB = 0;

	for (int i = 0; i < lenA + lenB; i = i + 1)
	{
		if (posA == lenA)
		{
			result[i] = argB[posB];
			posB = posB + 1;
		}
		else if (posB == lenB)
		{
			result[i] = argA[posA];
			posA = posA + 1;
		}
		else
		{
			if (argA[posA] < argB[posB])
			{
				result[i] = argA[posA];
				posA = posA + 1;
			}
			else
			{
				result[i] = argB[posB];
				posB = posB + 1;
			}
		}
	}

	return result;
}