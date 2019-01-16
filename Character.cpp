/*********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Character.cpp is the Character class function
		    implemenation file.
*********************************************************************/
#include "Character.hpp"

#include <iostream>
using std::cout;
using std::endl;

/*********************************************************************
** Description: Default constructor set to unknown.
**********************************************************************/
Character::Character()
{
	charName = "Unknown";
}

/*********************************************************************
** Description: This constructor takes in one integers: hp for the 
		character healthpoint set the member variable.
**********************************************************************/
Character::Character(int hp)
{
	healthPoint = hp;
}


/*********************************************************************
** Description: This function accepts no parameter and returns an
		integer based on the character's name.
*********************************************************************/
int Character::getHP()
{
	return healthPoint;
}

/*********************************************************************
** Description: This function accepts no parameter and return a boolean
		if a character is alive.
*********************************************************************/
bool Character::getAlive()
{
	return alive;
}

/*********************************************************************
** Description: This function accepts no parameter and return a string
		representing the character's name.
*********************************************************************/
string Character::getCharName()
{
	return charName;
}

/*********************************************************************
** Description: This function accepts two integer parameters reprsenting
		the min and max range. Generate and calculate a random number
		between those range.
*********************************************************************/
int Character::randomNum(int min, int max)
{
	return (rand() % (max - min + 1) + min);
}
