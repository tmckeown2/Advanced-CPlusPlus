#include "BucketSort.h"

int main()
{
	int data[SIZE] = { 4, 13, 23, 12, 7, 28, 9, 15, 2, 21 };
	BucketSort* myBucket = new BucketSort(data);
	//myBucket->initialiseClass(data);

	myBucket->doSort();

	myBucket->displayBuckets();

	// Clean up
	delete myBucket;
	system("pause");
}