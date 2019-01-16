/*********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     UnluckySpace.hpp is the class header file. Unlucky
		    Space class is the derived class of the base class Space.
*********************************************************************/

#ifndef UNLUCKYSPACE_HPP
#define UNLUCKYSPACE_HPP

#include "Space.hpp"

class UnluckySpace : public Space
{
	private:

	public:
		UnluckySpace();
		void action();
		int getItem();
		int buff();
};
#endif
