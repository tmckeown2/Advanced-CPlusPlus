#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/// <summary>
/// Car structure that stores:
/// - Colour
/// - Make of the car
/// - Miles travelled
/// - Number of doors
/// </summary>
struct SCar
{
	string colour;
	string make;
	float mileage;
	int doors;
};

/// <summary>
/// Book structure that stores:
/// - ID
/// - Retail Price
/// </summary>
struct SBook
{
	int id;
	float rrp;
};

void multiplesOfThree();
void displayCar(SCar car);
void fileCopy();
void books();
void addArrays(int arr1[3][2], int arr2[3][2]);

int main()
{
	// Task 1
	//multiplesOfThree();

	// Task 2
	//SCar car = { "COLOUR", "MAKE", 1.3f, 4 };
	//displayCar(car);

	// Task 3
	//fileCopy();

	// Task 4
	//books();

	// Task 5
	//int a1[3][2] = { { 0, 1 },{ 2, 3 },{ 4, 5 } };
	//int a2[3][2] = { { 5, 0 },{ 4, 1 },{ 3, 2 } };
	//addArrays(a1, a2);

	system("pause");
}

// Task 1
/// <summary>
/// Fills an array with multiples of 3 and outputs them to std output
/// </summary>
void multiplesOfThree()
{
	int arr[4];

	for (int i = 0; i < 4; i++)
	{
		arr[i] = (i + 1) * 3;
		cout << arr[i] << endl;
	}
}


// Task 2
/// <summary>
/// Displays attributes of a car structure
/// </summary>
/// <param name="car">Car structure to read from</param>
void displayCar(SCar car)
{
	cout << "Car: " << endl;
	cout << "Colour: " << car.colour << endl;
	cout << "Make: " << car.make << endl;
	cout << "Mileage: " << car.mileage << endl;
	cout << "Doors: " << car.doors << endl;
}

// Task 3
/// <summary>
/// Copies the contents of the file "myfile.txt" to "copy.txt"
/// </summary>
void fileCopy()
{
	ifstream infile("myfile.txt");
	ofstream outfile("copy.txt");
	string text;
	
	while (getline(infile, text))
		outfile << text << endl;

	outfile.close();
}

// Task 4
/// <summary>
/// Creates an array of 4 book structures and populates them with user-defined data
/// </summary>
void books()
{
	SBook books[4];

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter book ID: ";
		cin >> books[i].id;

		cout << "Enter book price: ";
		cin >> books[i].rrp;

		cout << endl;
		cout << "Book:" << endl;
		cout << "ID: " << books[i].id << endl;
		cout << "Price: " << books[i].rrp << endl; 
		cout << endl;
	}
}

// Task 5
/// <summary>
/// Adds two 2D arrays of size 3x2 and outputs the result
/// </summary>
/// <param name="arr1">Left array</param>
/// <param name="arr2">Right array</param>
void addArrays(int arr1[3][2], int arr2[3][2])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr1[i][j] << " + " << arr2[i][j] << " = " << arr1[i][j] + arr2[i][j] << endl;
		}
	}
}