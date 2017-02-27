#include "Sort.h"
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

void HeapSort(vector<double> &a, int length)
{
	buildheap(a, length);
	int heapsize, i;
	double temp;
	heapsize = length - 1;
	for (i = heapsize; i >= 0; i--)
	{
		temp = a[0];
		a[0] = a[heapsize];
		a[heapsize] = temp;
		heapsize--;
		satisfyheap(a, 0, heapsize);
	}
}

void buildheap(vector<double> &a, int length)
{
	int i, heapsize;
	heapsize = length - 1;
	for (i = (length / 2); i >= 0; i--)
	{
		satisfyheap(a, i, heapsize);
	}
}

void satisfyheap(vector<double> &a, int i, int heapsize)
{
	int l, r, largest;
	double temp;
	l = 2 * i;
	r = 2 * i + 1;
	if (l <= heapsize && a[l] > a[i])
	{
		largest = l;
	}
	else
	{
		largest = i;
	}
	if (r <= heapsize && a[r] > a[largest])
	{
		largest = r;
	}
	if (largest != i)
	{
		temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;
		satisfyheap(a, largest, heapsize);
	}
}



