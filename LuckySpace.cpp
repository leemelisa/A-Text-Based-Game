/*********************************************************************
** Program name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     LuckySpace.cpp is the LuckySpace class function
		    implemenation file.
*********************************************************************/
#include "LuckySpace.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** Description: This function accepts no parameter and sets the the space
		name to "Bowser's Castle".
*********************************************************************/
LuckySpace::LuckySpace()
{
	name = "Lucky Space";
}

/*********************************************************************
** Description: This function accepts no parameter and display the space's
		action to the user.
*********************************************************************/
void LuckySpace::action()
{
	cout << "You found a potion. Potion was added to your bag.\n";
	cout << "You recived a double die roll buff.\n";
}

/*********************************************************************
** Description: This function accepts no parameter and return a integer
		representing the lucky space item number.
*********************************************************************/
int LuckySpace::getItem()
{
	// potion id num
	return 222;
}

/*********************************************************************
** Description: This function accepts no parameter and return a integer
		representing the lucky space buff number.
*********************************************************************/
int LuckySpace::buff()
{
	// double attack roll buff = 112
	return 112;
}
