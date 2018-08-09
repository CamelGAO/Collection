// QuickSort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "QuickSort.h"

bool compare(int _a, int _b)
{
	return _a < _b;
}

int main()
{
	int a[] = { 32,71,12,45,26,80,53,33,12 };
	int al = 9;

	MySort::QuickSort(a, al, compare);
	for (size_t i = 0; i < al; ++i)
		std::cout << ' ' << a[i];
	std::cout << std::endl;

    return 0;
}

