#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include "Stack.h"

using namespace std;

// constant for the maximum size of the unsorted array and for each of the buckets.
//const int SIZE = 10;

class BucketSort
{
private:
	int unsortedData[SIZE]; // the data to be sorted
	Stack* bucket1;
	Stack* bucket2;
	Stack* bucket3;

	//int bucket1[SIZE]; // stack implemention for bucket 1
	//int bucket1Top; // stack top for bucket 1
	//int bucket2[SIZE]; // stack implemention for bucket 2
	//int bucket2Top; // stack top for bucket 2
	//int bucket3[SIZE]; // stack implemention for bucket 3
	//int bucket3Top; // stack top for bucket 3
public:
	BucketSort(int data[SIZE]);

	void doSort();
	//void initialiseClass(int data[SIZE]);
	void displayBuckets();
};