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
	std::vector<int> data(a, a + 9);

	MySort::StraightInsertionSort(data, compare);

	for (std::vector<int>::iterator it = data.begin(); it != data.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	return 0;
}




