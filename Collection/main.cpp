#include "stdafx.h"
#include "vector"
#include "iostream"
#include "StraightInsertionSort.h"

using namespace std;

bool compare(int _a, int _b)
{
	return _a < _b;
}

int main()
{
	int a[] = { 32,71,12,45,26,80,53,33,12 };
	size_t al = 9;

	std::vector<int> data(a, a + al);
	MySort::StraightInsertionSort(data, compare);
	for (std::vector<int>::iterator it = data.begin(); it != data.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;


	int b[] = { 32,71,12,45,26,80,53,33,12 };
	size_t bl = 9;

	MySort::StraightInsertionSort(b, bl, compare);
	for (size_t i = 0; i < bl; ++i)
		std::cout << ' ' << b[i];
	std::cout << std::endl;

	return 0;
}




