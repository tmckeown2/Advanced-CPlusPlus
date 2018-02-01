#include "Counter.h"

// Task 5
// Initialises amount and top to 0
CCounter::CCounter()
{
	mAmount = mTop = 0;
}

// Initialises amount to a user-defined value and top to 0
CCounter::CCounter(int number)
{
	mAmount = number;
	mTop = 0;
}

// Set counter to the value of number
void CCounter::Set(int number)
{
	mAmount = number;
}

// Get the current value of the counter
int CCounter::Get()
{
	return mAmount;
}

// Increment the counter by 1 (trivial)
void CCounter::Increment()
{
	mAmount++;
}

// Task 2
// Decrement the counter by 1
void CCounter::Decrement()
{
	mAmount--;
}

// Sets top and resets amount
void CCounter::Reset()
{
	mTop = mAmount;
	mAmount = 0;
}

// Outputs amount and top to std output
void CCounter::Display()
{
	std::cout << mAmount << ", " << mTop << std::endl;
}

// Task 3
// Outputs "The rain in Spain" and increments amount
void CCounter::RainInSpain()
{
	std::cout << "The rain in Spain" << std::endl;
	Increment();
}