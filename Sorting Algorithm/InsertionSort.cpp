#include "Sort.h"
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

//Insertion Sort
vector<double> InsertionSort(vector<double> A, int n)
{
	for (int i = 1; i <= n - 1; ++i)
	{
		double value = A[i];
		int hole = i;
		while (hole > 0 && A[hole - 1] > value)
		{
			A[hole] = A[hole - 1];
			hole = hole - 1;
		}
		A[hole] = value;
	}
	return A;
}