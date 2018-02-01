#include "Stack.h"

// Task 9
// Replaces the initialiseStack function.
// Set up the stack. Set top of the stack to 0.
Stack::Stack()
{
	top = 0;
}

// Task 11
// Initialise the stack with the contents of another stack.
Stack::Stack(Stack* newStack)
{
	top = newStack->top;

	for (int i = 0; i < top; i++)
		data[i] = newStack->data[i];
}

// pushes data onto the stack, increments top.
// input: string newData. The data to be pushed onto the top of the stack.
void Stack::push(string newData)
{
	if (!isFull())
	{
		data[top] = newData;
		++top;
	}
	else
	{
		cout << "stack full" << endl;
	}
}

// pops data from the stack, decrements top.
// output: string &newData (reference parameter). The data to be popped from the top of the stack.
void Stack::pop(string &oldData)
{
	if (!isEmpty())
	{
		--top;
		oldData = data[top];
	}
	else
	{
		cout << "stack empty" << endl;
		oldData = "";
	}
}

// Set up the stack. Set top of the stack to 0.
//void Stack::initialiseStack()
//{
//	top = 0;
//}

// Checks to see whether the array is full.
// Returns: true if the array is full, false if the array is not full.
bool Stack::isFull()
{
	if (top >= SIZE)
	{
		return true;
	}
	return false;
}

// Checks to see whether the array is empty.
// Returns: true if the array is empty, false if the array is not empty.
bool Stack::isEmpty()
{
	if (top <= 0)
	{
		return true;
	}
	return false;
}

// Displays all of the items currently on the stack in order from the bottom of the stack
// to the top of the stack.
void Stack::displayStack()
{
	for (int i = 0; i<top; ++i)
	{
		cout << data[i] << endl;
	}
}

// Task 2
// Returns: the value of top.
int Stack::getLength()
{
	return top;
}

// Task 3
// Displays all of the items currently on the stack in order from the top of the stack
// to the bottom of the stack.
void Stack::displayStackReversed()
{
	for (int i = top - 1; i >= 0; i--)
	{
		cout << data[i] << endl;
	}
}

// Task 4
// Counts the number of times a string is found in the stack.
// Returns: the number of instances of the string. If no instances are found 0 is returned.
int Stack::countData(string searchString)
{
	int count = 0;

	for (int i = 0; i < top; i++)
	{
		if (data[i] == searchString)
			count++;
	}

	return count;
}

// Task 5
// Gets and returns the position of the found string.
// Returns: the position of the string. If the string is not found -1 is returned.
int Stack::findData(string searchString)
{
	for (int i = 0; i < top; i++)
		if (data[i] == searchString)
			return i;

	return -1;
}

// Task 6
// Displays the nth element of the stack if within the bounds
// otherwise an error message is displayed.
void Stack::displayN(int n)
{
	if (0 <= n && n < top)
		cout << data[n] << endl;
	else
		cout << "Out of bounds!" << endl;
}

// Task 7
// Finds the data at element n and assigns it to foundString.
// Returns: true if element is found. Otherwise false.
bool Stack::findN(int n, string &foundString)
{
	if (0 <= n && n < top)
	{
		foundString = data[n];
		return true;
	}
	
	return false;
}

// Task 8
// Checks if all values on the stack are identical.
// Returns: true if all values are identical. Otherwise false.
bool Stack::allSame()
{
	// If there is only 1 value then return true.
	if (top == 1)
		return true;

	// Check if current and next are the same value.
	// If not then return false.
	for (int i = 0; i < top-1; i++)
	{
		if (data[i] != data[i + 1])
			return false;
	}

	return true;
}

// Task 10
// Copies over the contents of another stack
void Stack::copyStack(Stack* newStack)
{
	top = newStack->top;

	for (int i = 0; i < top; i++)
		data[i] = newStack->data[i];
}