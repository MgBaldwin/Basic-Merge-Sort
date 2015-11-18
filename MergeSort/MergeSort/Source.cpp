#include "Merge.h"
#include <iostream>

int main()
{
	std::string A[] = { "a", "b", "c", "e", "g" };
	std::string B[] = { "d", "e", "f", "h", "i", "j" };
	int len = sizeof(A) / sizeof(std::string) + sizeof(B) / sizeof(std::string);
	std::string *C = new std::string[len];
	C = MergeSort(A, B, sizeof(A) / sizeof(std::string), sizeof(B) / sizeof(std::string));
	for (int i = 0; i < len; i = i + 1)
	{
		std::cout << C[i] << std::endl;
	}
	return 0;
}