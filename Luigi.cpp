/*********************************************************************
** Program name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Luigi.cpp is the Luigi class fucntion implementation
		    file.
*********************************************************************/
#include "Luigi.hpp"
#include <iostream>
using std::endl;
using std::cin;
using std::cout;

/*********************************************************************
** Description: This constructor takes in a integer represent Luigi's
		hp and sets the memember variable. In addition, set the character
		name to "Luigi".
*********************************************************************/
Luigi::Luigi(int hp) :Character(hp)
{
	healthPoint = hp;
	charName = "Luigi";
}

/*********************************************************************
** Description: This function takes in an intenger representing a
		buff ID number. Based on the buff ID number Bowser we either
		deal double damage or deal damage betwen 1-6.
*********************************************************************/
int Luigi::calcAtk(int buffID)
{
	int rollNum;

	// roll two die
	if (buffID == 112)
	{
		rollNum = (randomNum(1, 6) + randomNum(1, 6));
	}
	// roll single die
	else
	{
		rollNum = (randomNum(1, 6));
	}

	cout << "Luigi Attack Damage: " << rollNum << endl;
	return rollNum;
}

/*********************************************************************
** Description: This function takes in an integer represent damage to be
		dealt and calculate the current hp.
*********************************************************************/
int Luigi::calcHP(int dmg)
{
	int currentHP = (healthPoint -= dmg);

	// heal buff
	if (dmg == 777)
	{
		healthPoint = 15;
		return healthPoint;
	}
	else if (currentHP <= 0)
	{
		alive = false;
		return 0;
	}

	else
	{
		return currentHP;
	}
}
