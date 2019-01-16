/**********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Mario.cpp is the Mario class fucntion implementation
		    file.
*********************************************************************/
#include "Mario.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

/*********************************************************************
** Description: This constructor takes in a integer represent Mario's
		hp and sets the memember variable. In addition, set the character
		name to "Mario".
*********************************************************************/
Mario::Mario(int hp) :Character(hp)
{
	healthPoint = hp;
	charName = "Mario";
}

/*********************************************************************
** Description: This function takes in an intenger representing a
		buff ID number. Based on the buff ID number Bowser we either
		deal double damage or deal damage betwen 1-8.
*********************************************************************/
int Mario::calcAtk(int buffID)
{
	int rollNum; 
	// roll two die
	if (buffID == 112)
	{
		rollNum = (randomNum(1, 8) + randomNum(1, 8));
	}
	else
	{
		rollNum = (randomNum(1, 8));
	}
		cout << "Mario Attack Damage: " << rollNum << endl;
		return rollNum;
}

/*********************************************************************
** Description: This function takes in an integer represent damage to be
		dealt and calculate the current hp.
*********************************************************************/
int Mario::calcHP(int dmg)
{
	int currentHP = (healthPoint -= dmg);
	
	// restore health
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
