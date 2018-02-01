#pragma once
#include <iostream>

// Definition for a simple counter
class CCounter
{
private:
	int mAmount; // stores the current count value
	
	// Task 2
	int mTop;

public:
	// Task 5
	CCounter(); // initialises amount and top to 0
	CCounter(int number); // initialises amount to a user-defined value and top to 0

	void Set(int number); // set count to the value of number
	int  Get(); 		// get the current value of amount
	void Increment();  	// increment count by 1 (trivial)

	// Task 2
	void Decrement(); // decrement count by 1
	void Reset(); // sets top and resets amount
	void Display(); // outputs amount and top to std output

	// Task 3
	void RainInSpain(); // outputs "The rain in Spain" and increments amount
};