#pragma once
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 10;

class Stack
{
private:
	int top;
	int data[SIZE];
public:
	Stack();
	void push(int newData);
	void pop(int &oldData);
	bool isEmpty();
	bool isFull();
	void displayStack();
	int getLength();
	int* getData() { return data; }
};