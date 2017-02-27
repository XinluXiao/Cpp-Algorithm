#include "Sort.h"
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

//Merge Sort
void MergeSort(vector<double> &A, int l, int r)
{
	if (l < r)
	{
		int mid = l + (r - l) / 2;
		MergeSort(A, l, mid);
		MergeSort(A, mid + 1, r);
		Merge(A, l, mid, r);
	}
}

void Merge(vector<double> &A, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	vector<double> Left(n1);
	vector<double> Right(n2);
	for (i = 0; i < n1; i++)
	{
		Left[i] = A[l+i];
	}
	for (j = 0; j < n2; ++j)
	{
		Right[j] = A[m + 1 + j];
	}
	i = 0;
	j = 0;
	k = l;
	while (i < n1&&j < n2)
	{
		if (Left[i] <= Right[j])
		{
			A[k] = Left[i];
			i++;
		}
		else
		{
			A[k] = Right[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		A[k] = Left[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		A[k] = Right[j];
		j++;
		k++;
	}
}





