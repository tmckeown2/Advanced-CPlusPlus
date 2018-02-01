#include <iostream>
#include "Counter.h"
#include "Student.h"

using namespace std;

int main()
{
	CCounter* myCount = new CCounter; // declare object of type CCounter

	myCount->Set(3);
	myCount->Increment();
	int tmp = myCount->Get();
	cout << tmp << endl;

	// Task 1
	CCounter* counter = new CCounter;
	counter->Set(6); // Set to 6 initially
	while (counter->Get() < 10) // Increment until counter is equal to 10
		counter->Increment();

	// Task 2
	while (counter->Get() > 7) // Decrement until counter is equal to 7
		counter->Decrement();
	counter->Reset();
	counter->Display();

	// Task 3
	counter->RainInSpain(); // Invoke function to output RainInSpain and increment the counter

	// Task 4
	CStudent* student = new CStudent;
	student->setName("Name");
	student->setMark(2.5f);
	student->display();

	delete (student);
	delete (counter);
	delete (myCount);
	system("pause");
}