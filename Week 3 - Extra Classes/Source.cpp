#include <iostream>
#include "Noughts.h"

using namespace std;

int main()
{
	// Create a new noughts object
	CNoughts* noughts = new CNoughts;

	// Initialise the grid to defaults
	noughts->Initialise();

	// Keep going until a player has won
	while (!noughts->Winning())
	{
		// Break out of the loop if neither player won and no turns are left
		if (noughts->Drawing())
			break;

		noughts->PlayMove();
	}

	if (noughts->Drawing())
		cout << "Players have drawn!" << endl;
	else
	{
		// If a game is over then the previous player that played won
		// If current player is player 1 then player 2 is the winner and vice versa
		int winner = noughts->GetCurrentPlayer() == 1 ? 2 : 1;
		cout << "Player " << winner << " has won!" << endl;
	}

	// Clean up
	delete noughts;
	system("pause");
}