// CreateMultiWayTree.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string"
#include "iostream"

using namespace std;

string str = "100";
int main()
{
	size_t sz;
	int n = stoi(str, &sz);

	cout << n << " " << sz << " " << endl;;

    return 0;
}

