/*********************************************************************
** Program name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     FinalSpace.cpp is the FinalSpace class function
		    implemenation file.
*********************************************************************/
#include "FinalSpace.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** Description: This function accepts no parameter and sets the the space
		name to "Bowser's Castle".
*********************************************************************/
FinalSpace::FinalSpace()
{
	name = "Bowser's Castle";
}

/*********************************************************************
** Description: This function accepts no parameter and display the space's
		action to the user.
*********************************************************************/
void FinalSpace::action()
{
	cout << "You found a key. The key was added to your bag.\n";
	cout << "You recived a double die roll buff.\n";

	cout << "You use your potion and your health points are recovered.\n";
}

/*********************************************************************
** Description: This function accepts no parameter and return a integer
		representing the final space item number.
*********************************************************************/
int FinalSpace::getItem()
{
	// key
	return 333;
}

/*********************************************************************
** Description: This function accepts no parameter and return a integer
		representing the final space buff number.
*********************************************************************/
int FinalSpace::buff()
{
	// no buff for bowser
	return 0;
}
