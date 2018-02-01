#pragma once
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 20;

class Stack
{
private:
	int top;
	string data[SIZE];
public:
	// Task 9
	Stack();

	// Task 11
	Stack(Stack* newStack);

	void push(string newData);
	void pop(string &oldData);
	//void initialiseStack(); Removed during Task 9 and replaced with constructor
	bool isEmpty();
	bool isFull();
	void displayStack();

	// Task 2
	int getLength();

	// Task 3
	void displayStackReversed();

	// Task 4
	int countData(string searchString);

	// Task 5
	int findData(string searchString);

	// Task 6
	void displayN(int n);

	// Task 7
	bool findN(int n, string &foundString);

	// Task 8
	bool allSame();

	// Task 10
	void copyStack(Stack* newStack);
};