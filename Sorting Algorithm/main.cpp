#include<iostream>
#include<vector>
#include<algorithm>
#include "Sort.h"

using namespace std;

void main()
{
	//Sample vector A
	vector<double> A = { 11,13,3,5,4,6,9,7,8,10 };

	//Bubble Sort
	cout << "The following are the result for Bubble Sort:" << endl;
	vector<double> result1 = BubbleSort(A, A.size()); 
	vector<double>::iterator it1;
	for (it1 = result1.begin(); it1 != result1.end(); ++it1)
	{
		cout << *it1 << " ";
	}
	cout << endl;

	//Selection Sort
	cout << "The following are the result for Selection Sort:" << endl;
	vector<double> result2 = SelectionSort(A, A.size());
	vector<double>::iterator it2;
	for (it2 = result2.begin(); it2 != result2.end(); ++it2)
	{
		cout << *it2 << " ";
	}
	cout << endl;

	//Insertion Sort
	cout << "The following are the result for Insertion Sort:" << endl;
	vector<double> result3 = InsertionSort(A, A.size());
	vector<double>::iterator it3;
	for (it3 = result3.begin(); it3 != result3.end(); ++it3)
	{
		cout << *it3 << " ";
	}
	cout << endl;

	//Merge Sort
	cout << "The following are the result for Merge Sort:" << endl;
	auto A2 = A;
	MergeSort(A2, 0, A2.size()-1);
	vector<double>::iterator it4;
	for (it4 = A2.begin(); it4 != A2.end(); ++it4)
	{
		cout << *it4 << " ";
	}
	cout << endl;

	//Heap Sort
	cout << "The following are the result for Heap Sort:" << endl;
	auto A3 = A;
	HeapSort(A3, A3.size());
	vector<double>::iterator it5;
	for (it5 = A3.begin(); it5 != A3.end(); ++it5)
	{
		cout << *it5 << " ";
	}
	cout << endl;

	//Quick Sort
	cout<< "The following are the result for Quick Sort:" << endl;
	auto A4 = A;
	QuickSort(A4, 0, A4.size() - 1);
	vector<double>::iterator it6;
	for (it6 = A4.begin(); it6 != A4.end(); ++it6)
	{
		cout << *it6 << " ";
	}
	cout << endl;
}