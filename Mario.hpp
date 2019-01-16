/********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Mario.hpp is the class header file. Mario
		    class is the derived class of the base class Character.
*********************************************************************/
#ifndef MARIO_HPP
#define MARIO_HPP

#include "Character.hpp"

class Mario : public Character
{
	private:

	public:
		Mario(int);
		int calcAtk(int);
		int calcHP(int);
};

#endif 
