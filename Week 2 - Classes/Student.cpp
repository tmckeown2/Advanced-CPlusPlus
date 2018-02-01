#include "Student.h"

// Sets the student's name
void CStudent::setName(std::string name)
{
	mName = name;
}

// Sets the student's mark
void CStudent::setMark(float mark)
{
	mMark = mark;
}

// Displays the student's name and mark
void CStudent::display()
{
	std::cout << mName << ", " << mMark << std::endl;
}