#include "Pattern.h"

// Initialise the array.
// Better to do this as a constructor - if you are confident about constructors then
// convert this method into one
void CPattern::Initialise(int sequence[TOP])
{
	for (int i = 0; i < TOP; ++i)
	{
		mSequence[i] = sequence[i];
	}
}

// Display the array
void CPattern::Display()
{
	for (int i = 0; i < TOP; ++i) // Error at "int i = TOP;" was fixed to "int i = 0;"
	{
		cout << mSequence[i] << " ";
	}
	cout << endl;
}

// Display the array in reverse order
void CPattern::DisplayReversed()
{
	for (int i = TOP - 1; i > 0; --i) // Error at "int i = TOP;" was fixed to "int i = TOP - 1;"
	{
		cout << mSequence[i] << " ";
	}
	cout << endl;
}

// Find maximum value in the array
int CPattern::FindMax()
{
	int max = -100;

	for (int i = 0; i < TOP; ++i)
	{
		if (mSequence[i] > max) // Error at "i > max" was fixed to "mSequence[i] > max"
		{
			max = mSequence[i]; // Error at "max = i;" was fixed to "max = mSequence[i];"
		}
	}
	return max;
}

// Find the location of the first occurence of a value, i.e. it's index
// Return -1 if not found
int CPattern::FindLocation(int value)
{
	//int found = -1; removed as found is unnecessary
	for (int i = 0; i < TOP; ++i)
	{
		if (value == mSequence[i]) // Error at "found == mSequence[i]" was fixed to "value == mSequence[i]"
		{
			return i; // Error at "return found;" was fixed to "return i;" 
		}
	}
	return -1;
}