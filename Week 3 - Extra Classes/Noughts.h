#pragma once
#include <iostream>

using namespace std;

class CNoughts
{
private:
	static const int SIZE = 3;
	int mGrid[SIZE][SIZE];
	int mCurrentPlayer = 1;

	/// <summary>
	/// Prompts a user for input and checks the validity of the move
	/// </summary>
	/// <param name="x">X position to be updated</param>
	/// <param name="y">Y position to be updated</param>
	void RequestMove(int &x, int &y);
public:
	/// <summary>
	/// Gets the current player and returns it
	/// </summary>
	/// <returns>1 on Player 1's turn OR 2 on Player 2's turn</returns>
	inline int GetCurrentPlayer() { return mCurrentPlayer; }

	/// <summary>
	/// Sets the values in the grid to default (0)
	/// </summary>
	void Initialise();

	/// <summary>
	/// Gets a move and, if valid, plays the move for the current player
	/// </summary>
	void PlayMove();

	/// <summary>
	/// Displays the current player and current grid state
	/// </summary>
	void Display();

	/// <summary>
	/// Checks if there is a winner of the game
	/// </summary>
	/// <returns>True if a player has won. Otherwise false</returns>
	bool Winning();

	/// <summary>
	/// Checks if the game has been drawn and no moves are possible
	/// </summary>
	/// <returns>True if there are no more moves and no winner</returns>
	bool Drawing();
};