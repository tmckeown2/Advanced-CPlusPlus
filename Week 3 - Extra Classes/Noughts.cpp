#include "Noughts.h"

void CNoughts::Initialise()
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			mGrid[i][j] = 0;
}

void CNoughts::PlayMove()
{
	// Request location
	int x, y;
	RequestMove(x, y);

	// Play move
	mGrid[y][x] = mCurrentPlayer;
	
	// If current player is 1 then set to 2
	// Otherwise set current player to 1
	mCurrentPlayer = mCurrentPlayer == 1 ? 2 : 1;
}

void CNoughts::RequestMove(int &x, int &y)
{
	bool validInput = false;

	while (!validInput)
	{
		cout << "Please enter x position: ";
		cin >> x;

		cout << "Please enter y position: ";
		cin >> y;

		// If x and y are within the bounds of the grid AND the grid reference is empty then input is valid
		// Otherwise the input is invalid
		if ((0 <= x && x < SIZE) && 
			(0 <= y && y < SIZE) &&
			(mGrid[y][x] == 0))
			validInput = true;
		else
		{
			validInput = false;

			cout << "Invalid input!" << endl;
			cout << "Please input a value between 0 (inclusive) and " << SIZE << " (exclusive)" << endl;
			cout << "Only grid references that are empty can be played in" << endl;
		}
	}
}

void CNoughts::Display()
{
	cout << endl;
	cout << "Current player: " << mCurrentPlayer << endl;
	cout << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << mGrid[i][j] << "   ";
		}
		cout << endl;
	}

	cout << endl;
}

bool CNoughts::Winning()
{
	bool check;

	// Display the grid
	Display();

	// Check for player 1 winner
	for (int i = 0; i < SIZE; i++)
	{
		// Check row
		check = true;
		for (int j = 0; j < SIZE; j++)
		{
			if (mGrid[i][j] != 1)
				check = false;
		}
		if (check) return true;

		// Check column
		check = true;
		for (int j = 0; j < SIZE; j++)
		{
			if (mGrid[j][i] != 1)
				check = false;
		}
		if (check) return true;
	}

	// Check diagonals
	check = true;
	for (int i = 0; i < SIZE; i++)
	{
		if (mGrid[i][i] != 1)
			check = false;
	}
	if (check) return true;

	check = true;
	for (int i = 0; i < SIZE; i++)
	{
		if (mGrid[i][(SIZE - 1) - i] != 1)
			check = false;
	}
	if (check) return true;

	// Check for player 2 winner
	for (int i = 0; i < SIZE; i++)
	{
		// Check row
		check = true;
		for (int j = 0; j < SIZE; j++)
		{
			if (mGrid[i][j] != 2)
				check = false;
		}
		if (check) return true;

		// Check column
		check = true;
		for (int j = 0; j < SIZE; j++)
		{
			if (mGrid[j][i] != 2)
				check = false;
		}
		if (check) return true;
	}

	// Check diagonals
	check = true;
	for (int i = 0; i < SIZE; i++)
	{
		if (mGrid[i][i] != 2)
			check = false;
	}
	if (check) return true;

	check = true;
	for (int i = 0; i < SIZE; i++)
	{
		if (mGrid[i][(SIZE - 1) - i] != 2)
			check = false;
	}
	if (check) return true;

	return false;
}

bool CNoughts::Drawing()
{
	// If no empty spaces are left then return true (Draw)
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			if (mGrid[i][j] == 0)
				return false;

	return true;
}