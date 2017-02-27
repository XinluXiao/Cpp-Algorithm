#include "Sort.h"
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

//Bubble Sort
vector<double> BubbleSort(vector<double> A, int n)
{
	for (int k = 0; k < n; ++k)
	{
		int flag = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			if (A[i] > A[i + 1])
			{
				swap(A[i], A[i + 1]);
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
	return A;
}