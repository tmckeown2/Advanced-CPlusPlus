#pragma once
#include <iostream>

using namespace std;

const int TOP = 6;

class CPattern
{
private:
	int mSequence[TOP];
public:
	void Initialise(int sequence[TOP]);
	void Display();
	int FindMax();
	void DisplayReversed();
	int FindLocation(int value);
};