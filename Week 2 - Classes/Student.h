#pragma once
#include <iostream>
#include <string>

// Task 4
// Definition for a student
class CStudent
{
private:
	std::string mName; // name of the student
	float mMark; // mark of the student

public:
	void setName(std::string name); // sets the student's name
	void setMark(float mark); // sets the student's mark

	void display(); // displays the student's name and mark
};