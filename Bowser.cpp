/*********************************************************************
** Progam Name:	    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Bowser.cpp is the Bowser class fucntion implementation 
		    file.
*********************************************************************/
#include "Bowser.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** Description: This constructor takes in a integer represent Bowser's
		hp and sets the memember variable. In addition, set the character
		name to "Bowser".
*********************************************************************/
Bowser::Bowser(int hp) :Character(hp)
{
	healthPoint = hp;
	charName = "Bowser";
}

/*********************************************************************
** Description: This function takes in an intenger representing a 
		buff ID number. Based on the buff ID number Bowser we either
		deal double damage or deal damage betwen 1-4.
*********************************************************************/
int Bowser::calcAtk(int buffID)
{
	int rollNum;
	// roll two die
	if (buffID == 112)
	{
		rollNum = (randomNum(1, 4) + randomNum(1, 4));
	}
	// roll single die
	else
	{
		rollNum = (randomNum(1, 4));
	}
	
	// display and return attack damage to be dealt
	cout << "Bowser Attack Damage: " << rollNum << endl;
	return rollNum;
}

/*********************************************************************
** Description: This function takes in an integer represent damage to be
		dealt and calculate the current hp.
*********************************************************************/
int Bowser::calcHP(int dmg)
{
	// calculate and store current hp
	int currentHP = (healthPoint -= dmg);

	// if hp is less than 0 set character to dead and return 0
	if (currentHP <= 0)
	{
		alive = false;
		return 0;
	}
	// return currrent hp as an int
	else
	{
		return currentHP;
	}
}
