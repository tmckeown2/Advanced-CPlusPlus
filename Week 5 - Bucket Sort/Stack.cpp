#include "Stack.h"

Stack::Stack()
{
	top = 0;
}

void Stack::push(int newData)
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

void Stack::pop(int &oldData)
{
	if (!isEmpty())
	{
		--top;
		oldData = data[top];
	}
	else
	{
		cout << "stack empty" << endl;
		oldData = 0;
	}
}

bool Stack::isFull()
{
	if (top >= SIZE)
	{
		return true;
	}
	return false;
}

bool Stack::isEmpty()
{
	if (top <= 0)
	{
		return true;
	}
	return false;
}

void Stack::displayStack()
{
	for (int i = 0; i<top; ++i)
	{
		cout << data[i] << endl;
	}
}

int Stack::getLength()
{
	return top;
}