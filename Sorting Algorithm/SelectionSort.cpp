#include "Sort.h"
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

//Selection Sort
vector<double> SelectionSort(vector<double> A, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int imin = i;
		for (int j = i+1; j < n; ++j)
		{
			if (A[j] < A[imin])
			{
				imin = j;
			}
		}
		auto temp = A[i];
		A[i] = A[imin];
		A[imin] = temp;
	}
	return A;
}