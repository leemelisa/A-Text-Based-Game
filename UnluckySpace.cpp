/********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     UnluckySpace.cpp is the Unluckyspace class function
		    implemenation file.
*********************************************************************/

#include "UnluckySpace.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** Description: This function accepts no parameter and sets the the space
		name to "Unlucky Space".
*********************************************************************/
UnluckySpace::UnluckySpace()
{
	name = "Unlucky Space";
}

/*********************************************************************
** Description: This function accepts no parameter and display the space's
		action to the user.
*********************************************************************/
void UnluckySpace::action()
{
	cout << "Oh no.. you laned on an unlucky space.\n";
	cout << "Bowser is angry. He will deal double damage this turn.\n";
}

/*********************************************************************
** Description: This function accepts no parameter and return a integer
		representing the unlucky space item number. 
*********************************************************************/
int UnluckySpace::getItem()
{
	// no item found
	return 0;
}

/*********************************************************************
** Description: This function accepts no parameter and return a integer
		representing the unlucky space buff number.
*********************************************************************/
int UnluckySpace::buff()
{
	// no buff
	return 0;
}
