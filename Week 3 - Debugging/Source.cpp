#include "Pattern.h"

using namespace std;

int main()
{
	CPattern* myPattern = new CPattern;
	int testArray[TOP] = { 2, 4, 5, 7, 1, 3 };
	myPattern->Initialise(testArray);

	cout << "Display the array:" << endl;
	myPattern->Display();

	cout << endl << "Display the array in reverse order:" << endl;
	myPattern->DisplayReversed();

	cout << endl << "max element of the array: " << myPattern->FindMax();

	cout << endl << endl;
	cout << "location of the number 7: " << myPattern->FindLocation(7);
	cout << endl;

	system("pause");
}