/*********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Character.hpp is the Character class header file.
		    This is the base class for all dervied classes.
*********************************************************************/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
using std::string;

class Character
{
	protected:
		int healthPoint;
		bool alive = true;
		string charName;

	public:
		Character();
		Character(int);
		int getHP();
		bool getAlive();
		virtual int calcAtk(int) = 0;
		virtual int calcHP(int) = 0;
		int randomNum(int, int);
		string getCharName();
};

#endif
