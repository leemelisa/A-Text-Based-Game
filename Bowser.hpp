/*********************************************************************
** Program name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Bowser.hpp is the class header file. Bowser class 
		    is the derived class of the base class Character.
*********************************************************************/

#ifndef BOWSER_HPP
#define BOWSER_HPP

#include "Character.hpp"

class Bowser : public Character
{
	private:

	public:
		Bowser(int);
		int calcAtk(int);
		int calcHP(int);
};

#endif
