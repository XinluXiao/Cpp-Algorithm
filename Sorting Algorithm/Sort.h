#pragma once
#ifndef SORT_H
#define SORT_H
#include<vector>

using namespace std;

//Bubble Sort
vector<double> BubbleSort(vector<double> A, int n);

//Selection Sort
vector<double> SelectionSort(vector<double> vec, int n);

//Insertion Sort
vector<double> InsertionSort(vector<double> A, int n);

//Merge Sort
void MergeSort(vector<double> &A, int l, int r); //l is for the left index, r is for the right index
void Merge(vector<double> &A, int l, int m, int r);

//Heap Sort
void HeapSort(vector<double> &a, int length);
void buildheap(vector<double> &a, int length);
void satisfyheap(vector<double> &a, int i, int heapsize);

//Quick Sort
void QuickSort(vector<double> &A, int start, int end);
int Partition(vector<double> &A, int start, int end);

#endif
