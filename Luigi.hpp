/*********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Luigi.hpp is the class header file. Luigi
		    class is the derived class of the base class Character.
*********************************************************************/
#ifndef LUIGI_HPP
#define LUIGI_HPP

#include "Character.hpp"

class Luigi : public Character
{
	private:

	public:
		Luigi(int);
		int calcAtk(int);
		int calcHP(int);
};

#endif 
