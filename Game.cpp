/************************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/27/2018
** Description:     Game.cpp is the Game class function implementation
		    file.
*********************************************************************/

#include "Game.hpp"
#include "validate.hpp"
#include "Mario.hpp"
#include "Luigi.hpp"
#include "Bowser.hpp"
#include "Space.hpp"
#include "StartSpace.hpp"
#include "LuckySpace.hpp"
#include "UnluckySpace.hpp"
#include "FinalSpace.hpp"

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** Description: Default constructor.
*********************************************************************/
Game::Game()
{

}
/*********************************************************************
** Description: Accepts no parameter and display instructions to the 
		user and calls the startGame function to begin the game.
*********************************************************************/
void Game::displayInstructions()
{
	cout << "\tWelcome to Defeat Bowser\n"
		<< "------------------------------------------------\n"
		<< "Goal: Reach the end of the board(6 spaces) and defeat Bowser.\n\n"
		<< "Instuctions:\n"
		<< "1. Pick a character to play\n"
		<< "2. Find a key to unlock Bowser's Castle\n"
		<< "3. Defeat Bowser on the way to his castle or at his Castle\n"
		<< "\nRules:\n"
		<< "- You are only able to move forward in the board.\n"
		<< "- Defeat Bowser before he defeats you.\n"
		<< "- Finish game within 50 rounds.\n"
		<< "\nMap\n"
		<< "|Starting Space|Unlucky Space|Lucky Space|Unlucky Space|Lucky Space|Bowser's Castle|\n"
		<< endl;

	startGame();
}

/*********************************************************************
** Description: This function accepts no parameter. Ask the user choose
		a character and create it. Calls the create board function to 
		create the board spaces. Runs the game until either, the game
		is defeated or the player has been defeated.
*********************************************************************/
void Game::startGame()
{
	string input;
	int userChoice;

	// ask, store, validate user to choice of character
	cout << "Choose a character\n"
		<< "------------------------------------------------\n"
		<< "1. Mario - HP: 15 \tAttack: 1-8 die\n"
		<< "2. Luigi - HP: 20 \tAttack: 1-6 die\n"
		<< endl;
	cout << "Enter your choice: ";
	cin >> input;
	userChoice = validate(input, 1, 2);

	// create user char
	if (userChoice == 1)
	{
		player = new Mario(15);
	}
	if (userChoice == 2)
	{
		player = new Luigi(20);
	}
	// create bowser character
	boss = new Bowser(50);
	 
	// set current space to starting space and create the board
	currentSpace = space1 = new StartSpace();
	createBoard();

	// iterate until game is defeated or player is defeated
	while (endGame == false && keyFound == false && player->getAlive() == true)
	{
		// display round and health of char and boss
		cout << "\n*****************************************************\n";
		cout << "\t\tRound " << round << endl;
		cout << "*****************************************************\n";
		cout << "Bowser HP: " << boss->getHP() << endl;
		cout << player->getCharName() << " HP: " << player->getHP() << endl;
		displayBoard();

		// if user lands on starting space
		if (currentSpace == space1)
		{
			// provide user with a weapon
			if (!weaponFound)
			{
				playerBag.addItem(currentSpace->getItem());
				currentSpace->action();
				weaponFound = true;
			}

			// display bag
			playerBag.printBag();

			// if player is alive prompt space menu
			if (player->getAlive())
			{
				runSpace();
			}
		}
		// if user lands on unlucky space
		else if (currentSpace == space2 || currentSpace == space4)
		{
			// bowser attack and calcualte hp 
			if (boss->getAlive())
			{
				currentSpace->action();
				player->calcHP(boss->calcAtk(112));

				// display character's and boss hp
				cout << "\nBowser HP: " << boss->getHP() << endl;
				cout << player->getCharName() << " HP: " << player->getHP() << endl;
			}
			else
			{
				cout << "You've defeated Bowser. He is unable to attack.\n";
			}

			// display bag
			playerBag.printBag();

			// if player is alive prompt space menu
			if (player->getAlive())
			{
				runSpace();
			}
		}
		// if user lands on a lucky space
		else if (currentSpace == space3 || currentSpace == space5)
		{
			// add item to users bag
			if (!potionFound)
			{
				currentSpace->action();
				playerBag.addItem(currentSpace->getItem());
				potionFound = true;
			}
			else
			{
				cout << "You already found a potion. Only one potion is allowed.\n";
			}

			// display bag
			playerBag.printBag();

			// if player is alive prompt space menu
			if (player->getAlive())
			{
				runSpace();
			}
		}
		// final space
		else if (currentSpace == space6)
		{
			// restore marios health
			player->calcHP(777);
			// display bag
			if (!keyFound)
			{
				currentSpace->action();
				// add key
				playerBag.addItem(currentSpace->getItem());
				keyFound = true;
				// delete potion from bag
				playerBag.deleteItem(222);
			}

			// display bag
			playerBag.printBag();

			cout << "\n\tAction\n"
				<< "------------------------------------------------\n";
			// iterate fight until someone dies
			while (boss->getAlive() && player->getAlive())
			{
				// calculate boos and player's hp and attack
				boss->calcHP(player->calcAtk(currentSpace->buff()));
				player->calcHP(boss->calcAtk(currentSpace->buff()));
				
				// display player and boss hp
				cout << "Bowser HP: " << boss->getHP() << endl;
				cout << player->getCharName() << " HP: " << player->getHP() << "\n\n";
			}
			endGame = true;

		}
		// reset item found
		round++;
	}

	// display winning/losing message
	if (player->getAlive() == false)
	{
		cout << "You've died. Game over." << endl;
	}
	else if (boss->getAlive() == false && keyFound == true)
	{
		cout << "You've defeated Bowser. You won the game.\n";
	}
}

/*********************************************************************
** Description: This function accepts no parameter. Greate each 
		individually spaces and link them together.
*********************************************************************/
void Game::createBoard()
{
	space2 = new UnluckySpace();
	space3 = new LuckySpace();
	space4 = new UnluckySpace();
	space5 = new LuckySpace();
	space6 = new FinalSpace();

	space1->setLeft(NULL);
	space1->setRight(space2);

	space2->setLeft(space1);
	space2->setRight(space3);

	space3->setLeft(space2);
	space3->setRight(space4);

	space4->setLeft(space3);
	space4->setRight(space5);

	space5->setLeft(space4);
	space5->setRight(space6);

	space6->setLeft(space5);
	space6->setRight(NULL);
}

/*********************************************************************
** Description: This function accepts no parameter. Display the current
		location on the board to the user.
*********************************************************************/
void Game::displayBoard()
{
	cout << "\nSpace Number: " << spaceNum << "/6" << endl;
	cout << "Current Location: " << currentSpace->getName() << "\n\n";
}


/*********************************************************************
** Description: This function accepts no parameter. Display a menu
		for each space of the board. Direct the user to their correct 
		choice.
*********************************************************************/
void Game::runSpace()
{
	// ask, store and validate user choice
	userChoice = currentSpace->spaceMenu();

	cout << "\n\tAction\n"
		<< "------------------------------------------------\n";
	// direct user to correct direction
	if (userChoice == 1)
	{
		cout << "You are now moving to the next space.\n\n";

		// if the user can not move any further
		if (currentSpace->getRight() == NULL)
		{
			cout << "\nYou are unable to move any further.\n";
			runSpace();
		}

		// take user to next space
		currentSpace = currentSpace->getRight();

		spaceNum++;
	}
	// attack Bowser 
	else if (userChoice == 2)
	{
		if (boss->getAlive() && boss->getHP() > 0)
		{
			cout << "You attacked Bowser!\n\n";

			// calculate new hp of boss
			boss->calcHP(player->calcAtk(currentSpace->buff()));

			// display character's and boss hp
			cout << "Bowser HP: " << boss->getHP() << endl;
			cout << player->getCharName() << " HP: " << player->getHP() << endl;
		}
		else if (!boss->getAlive() && keyFound == false)
		{
			cout << "You've defeated Bowser. Now you must find the key and go to the castle.\n";
		}
		else
		{
			cout << "Congrats! You've defeated Bowser.\n";
		}

	}
	// deal double damage to Bowser
	else if (userChoice == 3)
	{
		if (boss->getAlive() && boss->getHP() > 0)
		{
			cout << "Princess Peach buffed your attack for this turn.\n"
				<< "You now deal double damage.\n\n";

			// calculate new hp of boss double attack dmg
			boss->calcHP(player->calcAtk(currentSpace->buff()) * 2);

			// display character's and boss hp
			cout << "Bowser HP: " << boss->getHP() << endl;
			cout << player->getCharName() << " HP: " << player->getHP() << endl;
		}
		else if (!boss->getAlive() && keyFound == false)
		{
			cout << "You've defeated Bowser. Now you must find the key and go to the castle.\n";
		}
		else
		{
			cout << "Congrats! You've defeated Bowser.\n";
		}
	}
}

/*********************************************************************
** Description: Destructor to free up dynamically allocated memory.
*********************************************************************/
Game::~Game()
{
	delete player;
	delete boss;
	delete space1;
	delete space2;
	delete space3;
	delete space4;
	delete space5;
	delete space6;
}
