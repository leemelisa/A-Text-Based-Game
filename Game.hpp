/*********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/27/2018
** Description:     Game.hpp is the Game class header file.
*********************************************************************/

#ifndef GAME_HPP
#define GAME_HPP
#include "Space.hpp"
#include "Character.hpp"
#include "Bag.hpp"

class Game
{
	private:
		Character *player;		// points to the user char choice
		Character *boss;
		Bag playerBag;
		Space *currentSpace;
		Space *space1;
		Space *space2;
		Space *space3;
		Space *space4;
		Space *space5;
		Space *space6;
		int userChoice;
		bool endGame = false;
		int round = 1;
		int spaceNum = 1;
		bool keyFound = false;
		bool potionFound = false;
		bool weaponFound = false;

	public:
		Game();
		~Game();
		void displayInstructions();
		void startGame();
		void createBoard();
		void displayBoard();
		void runSpace();
};

#endif 
