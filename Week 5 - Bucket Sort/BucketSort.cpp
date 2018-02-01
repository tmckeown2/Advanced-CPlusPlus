#include "BucketSort.h"

// Set up the class.
// Set top of each bucket to 0 and then create the array of unsortedData.
BucketSort::BucketSort(int data[SIZE])
{
	bucket1 = new Stack;
	bucket2 = new Stack;
	bucket3 = new Stack;

	for (int i = 0; i<SIZE; i++)
	{
		unsortedData[i] = data[i];
	}
}

// Note that this member function is being used in the place of a constructor.
//void BucketSort::initialiseClass(int data[SIZE])
//{
//	bucket1Top = 0;
//	bucket2Top = 0;
//	bucket3Top = 0;
//
//	for (int i = 0; i<SIZE; i++)
//	{
//		unsortedData[i] = data[i];
//	}
//}

void BucketSort::doSort()
{
	// Sort into buckets
	for (int i = 0; i < SIZE; i++)
	{
		if (1 <= unsortedData[i] && unsortedData[i] <= 10)
		{
			bucket1->push(unsortedData[i]);
		}
		else if (11 <= unsortedData[i] && unsortedData[i] <= 20)
		{
			bucket2->push(unsortedData[i]);
		}
		else if (21 <= unsortedData[i] && unsortedData[i] <= 30)
		{
			bucket3->push(unsortedData[i]);
		}
	}

	// Sort each bucket
	sort(bucket1->getData(), bucket1->getData() + bucket1->getLength());
	sort(bucket2->getData(), bucket2->getData() + bucket2->getLength());
	sort(bucket3->getData(), bucket3->getData() + bucket3->getLength());
}

// Displays all of the items currently on the stack in order from the bottom of the stack
// to the top of the stack.
void BucketSort::displayBuckets()
{
	cout << "Bucket 1: " << endl;
	bucket1->displayStack();

	cout << endl;
	cout << "Bucket 2: " << endl;
	bucket2->displayStack();

	cout << endl;
	cout << "Bucket 3: " << endl;
	bucket3->displayStack();
}