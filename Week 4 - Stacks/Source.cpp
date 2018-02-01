#include "Stack.h"

int main()
{
	Stack* myStack = new Stack;
	//myStack->initialiseStack(); Removed in Task 9

	myStack->push("red");
	myStack->push("green");
	myStack->push("blue");

	myStack->displayStack();
	cout << endl;

	string storedData;
	myStack->pop(storedData);
	cout << "popped: " << storedData << endl;	// blue
	myStack->pop(storedData);
	cout << "popped: " << storedData << endl;	// green
	myStack->pop(storedData);
	cout << "popped: " << storedData << endl;	// red

	cout << endl;
	Stack* taskStack = new Stack;
	taskStack->push("blue");
	taskStack->push("green");
	taskStack->push("red");
	taskStack->push("green");
	taskStack->push("red");
	taskStack->push("red");
	taskStack->push("green");
	taskStack->push("blue");
	taskStack->displayStack();
	cout << endl;

	// Task 2
	cout << "length: " << taskStack->getLength() << endl;

	// Task 3
	taskStack->displayStackReversed();
	cout << endl;

	// Task 4
	cout << "instances of \"red\": " << taskStack->countData("red") << endl;

	// Task 5
	cout << "first instance of \"red\": " << taskStack->findData("red") << endl;

	// Task 6
	cout << "6th element: ";
	taskStack->displayN(6);
	
	// Task 7
	string tmp;
	if (taskStack->findN(6, tmp))
		cout << "6th element: " << tmp << endl;
	else
		cout << "Outside of bounds!" << endl;

	// Task 8
	if (taskStack->allSame())
		cout << "all the same" << endl;
	else
		cout << "not all the same" << endl;

	// Advanced
	// Task 10
	Stack* copyStack = new Stack;
	copyStack->copyStack(taskStack);
	cout << "Copied stack: " << endl;
	copyStack->displayStack();
	cout << endl;

	// Task 11
	Stack* constructorCopyStack = new Stack(taskStack);
	cout << "Copied stack: " << endl;
	constructorCopyStack->displayStack();
	cout << endl;

	// Clean up
	delete constructorCopyStack;
	delete copyStack;
	delete taskStack;
	delete (myStack);
	system("pause");
}