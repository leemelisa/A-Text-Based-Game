/*********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Space.cpp is the Space class function implementation 
		    file. 
*********************************************************************/

#include "Space.hpp"
#include "Menu.hpp"
#include "validate.hpp"
#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::cout;

/********************************************************************
** Description: This function accepts no parameter, set name to space,
		and top, bottom to NULL;
********************************************************************/
Space::Space()
{
	name = "space";
	top = NULL;
	bottom = NULL;
}

/********************************************************************
** Description: This function accepts no parameter and creats a 
		space menu for the user. Ask, display, validate, and returns 
		user choice.
********************************************************************/
int Space::spaceMenu()
{
	Menu menuSelection;
	menuSelection.addOption("1. Open Door to Next Space");
	menuSelection.addOption("2. Attack Bowser");
	menuSelection.addOption("3. Sing a Song to Princess Peach");

	// display menu
	menuSelection.printMenu();

	string input;

	cout << "Enter your choice: ";
	cin >> input;
	int choice = validate(input, 1, 3);
	
	return choice;
}

/********************************************************************
** Description: This function accepts no parameter and return a 
		string reprsenting the spaces name.
********************************************************************/
string Space::getName()
{
	return name;
}

/********************************************************************
** Description: This function accepts no parameter and return a
		Space pointer of space to the right.
********************************************************************/
Space* Space::getRight()
{
	return right;
}

/********************************************************************
** Description: This function accepts no parameter and return a
		Space pointer of space to the right.
********************************************************************/
Space* Space::getLeft()
{
	return left;
}

/********************************************************************
** Description: This function accepts a Space pointer and set the 
		left var to that passed parameter.
********************************************************************/
void Space::setLeft(Space *nextLeft)
{
	left = nextLeft;
}

/********************************************************************
** Description: This function accepts a Space pointer and set the
		right var to that passed parameter.
********************************************************************/
void Space::setRight(Space *nextRight)
{
	right = nextRight;
}

/*********************************************************************
** Description: This function accepts two integer parameters reprsenting
		the min and max range. Generate and calculate a random number
		between those range.
*********************************************************************/
int Space::randomNum(int min, int max)
{
	return (rand() % (max - min + 1) + min);
}

