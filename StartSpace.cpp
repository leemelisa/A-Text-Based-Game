/********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     StartSpace.cpp is the StartSpace class function
		    implemenation file.
*********************************************************************/

#include "StartSpace.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** Description: This function accepts no parameter and sets the the space
		name to "Starting Space".
*********************************************************************/
StartSpace::StartSpace()
{
	name = "Starting Space";
}

/*********************************************************************
** Description: This function accepts no parameter and display the space's
		action to the user.
*********************************************************************/
void StartSpace::action()
{
		cout << "You found a weapon. Weapon was added to your bag.\n";
		cout << "You recived a double die roll buff.\n";
}

/*********************************************************************
** Description: This function accepts no parameter and return a integer
		representing the starting space item number.
*********************************************************************/
int StartSpace::getItem()
{
	// weapon id num = 111;
	return 111;
}

/*********************************************************************
** Description: This function accepts no parameter and return a integer
		representing the starting space buff number.
*********************************************************************/
int StartSpace::buff()
{
	// no buff
	return 0;
}
