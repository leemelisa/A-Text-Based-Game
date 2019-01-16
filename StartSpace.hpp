/********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     StartSpace.hpp is the class header file. StartSpace
		    class is the derived class of the base class Space.
*********************************************************************/
#ifndef STARTSPACE_HPP
#define STARTSPACE_HPP

#include "Space.hpp"

class StartSpace : public Space
{
	private:
	
	public:
		StartSpace();
		void action();
		int getItem();
		int buff();
};
#endif
