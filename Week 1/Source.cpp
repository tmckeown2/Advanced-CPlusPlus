#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/// <summary>
/// Student struct that contains:
/// - name of the student (string)
/// - mark for the student (float)
/// </summary>
struct SStudent
{
	string name;
	float mark;
};

/// <summary>
/// Car struct that contains:
/// - colour of the car
/// - make of the car
/// - amount of miles travelled in the car
/// - number of doors on the car
/// </summary>
struct SCar
{
	string colour;
	string make;
	float mileage;
	int doors;
};

void forLoopDisplay();
void whileLoopDisplay();
float GBPtoUSD(float gbp);
float USDtoGBP(float usd);
float convertToFahrenheit(float c);
float convertToCentigrade(float f);
float cubeNumber(float val);
SStudent writeToStudent(string name, float mark);
void displayStudent(SStudent student);
void addArrays(int arr1[3], int arr2[3]);
SCar writeToCar(string colour, string make, float mileage, int doors);
void displayCar(SCar car);
void writeHelloWorld();
void textEditor();

int main()
{
	// Task 1
	//forLoopDisplay();

	// Task 2
	//whileLoopDisplay();

	// Task 3
	//cout << "1 GBP = " << GBPtoUSD(1.f) << " USD" << endl;
	//cout << "1 USD = " << USDtoGBP(1.f) << " GBP" << endl;

	// Task 4
	//cout << "1 C = " << convertToFahrenheit(1.f) << " F" << endl;
	//cout << "1 F = " << convertToCentigrade(1.f) << " C" << endl;

	// Task 5
	//float val = 2.f;
	//cout << "Cube of " << val << " = " << cubeNumber(val) << endl;

	// Task 6
	//SStudent student = writeToStudent("Student", 97.5f);
	//displayStudent(student);

	// Task 7
	//int a1[3] = { 1, 1, 1 };
	//int a2[3] = { 1, 2, 3 };
	//addArrays(a1, a2);

	// Task 8
	//SCar car = writeToCar("Colour", "Make", 100.f, 4);
	//displayCar(car);

	// Task 9
	//writeHelloWorld();

	// Task 10
	//textEditor();

	system("pause");
}

// Task 1
/// <summary>
/// Display numbers 1 to 10 using a for loop
/// </summary>
void forLoopDisplay()
{
	for (int i = 1; i <= 10; i++)
		cout << i << endl;
}


// Task 2
/// <summary>
/// Display numbers 1 to 10 using a while loop
/// </summary>
void whileLoopDisplay()
{
	int i = 0;
	while (i < 10)
	{
		i++;
		cout << i << endl;
	}
}


// Task 3
/// <summary>
/// Converts currency: GBP to USD
/// </summary>
/// <param name="gbp">Amount of GBP to convert</param>
/// <returns>Converted amount of USD</returns>
float GBPtoUSD(float gbp)
{
	return gbp * 1.5f;
}

/// <summary>
/// Converts currency: USD to GBP
/// </summary>
/// <param name="usd">Amount of USD to convert</param>
/// <returns>Converted amount of GBP</returns>
float USDtoGBP(float usd)
{
	return usd / 1.5f;
}


// Task 4
/// <summary>
/// Converts temperature: Centigrade to Fahrenheit
/// </summary>
/// <param name="c">Amount of Centigrade to convert</param>
/// <returns>Converted amount of Fahrenheit</returns>
float convertToFahrenheit(float c)
{
	return ((9.0f / 5.0f) * c) + 32;
}

/// <summary>
/// Converts temperature: Fahrenheit to Centigrade
/// </summary>
/// <param name="f">Amount of Fahrenheit to convert</param>
/// <returns>Converted amount of Centigrade</returns>
float convertToCentigrade(float f)
{
	return (f - 32) * (5.0f / 9.0f);
}


// Task 5
/// <summary>
/// Cubes a value
/// </summary>
/// <param name="val">Value to cube</param>
/// <returns>Result of cubing</returns>
float cubeNumber(float val)
{
	return pow(val, 3);
}


// Task 6
/// <summary>
/// Writes data to a student struct and returns the struct
/// </summary>
/// <param name="name">Name of the student</param>
/// <param name="mark">Mark for the student</param>
/// <returns>Student struct with attributes stored</returns>
SStudent writeToStudent(string name, float mark)
{
	SStudent student = { name, mark };
	return student;
}

/// <summary>
/// Displays the data from a student struct
/// </summary>
/// <param name="student">Student struct to read from</param>
void displayStudent(SStudent student)
{
	cout << "Student: " << endl;
	cout << "Name: " << student.name << endl;
	cout << "Mark: " << student.mark << endl;
}


// Additional Exercises
// Task 7
/// <summary>
/// Adds the values from two arrays and outputs the results
/// </summary>
/// <param name="arr1">Left array</param>
/// <param name="arr2">Right array</param>
void addArrays(int arr1[3], int arr2[3])
{
	cout << "Results:" << endl;
	for (int i = 0; i < 3; i++)
		cout << arr1[i] << " + " << arr2[i] << " = " << arr1[i] + arr2[i] << endl;
}


// Task 8
/// <summary>
/// Writes data to a car struct and returns the struct
/// </summary>
/// <param name="colour">Colour of the car</param>
/// <param name="make">Make of the car</param>
/// <param name="mileage">Miles travelled in the car</param>
/// <param name="doors">Number of doors on the car</param>
/// <returns>Car struct with the attributes stored</returns>
SCar writeToCar(string colour, string make, float mileage, int doors)
{
	SCar car = { colour, make, mileage, doors };
	return car;
}

/// <summary>
/// Displays the data from a car struct
/// </summary>
/// <param name="car">Car struct to read from</param>
void displayCar(SCar car)
{
	cout << "Car: " << endl;
	cout << "Colour: " << car.colour << endl;
	cout << "Make: " << car.make << endl;
	cout << "Mileage: " << car.mileage << endl;
	cout << "Doors: " << car.doors << endl;
}


// Task 9
/// <summary>
/// Opens a file ("myfile.txt") and writes "hello world" into it.
/// </summary>
void writeHelloWorld()
{
	ofstream outfile("myfile.txt");
	outfile << "hello world";
	outfile.close();
}


// Task 10
/// <summary>
/// Opens a file ("myfile.txt") and allows the user to write into it
/// </summary>
void textEditor()
{
	ofstream outfile("myfile.txt");
	char c = 0;
	
	while (c != '=')
	{
		cin.get(c);
		outfile << c;
	}

	outfile.close();
}