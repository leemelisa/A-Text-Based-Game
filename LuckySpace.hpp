/**********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     LuckySpace.hpp is the class header file. LuckySpace
		    class is the derived class of the base class Space.
*********************************************************************/

#ifndef LUCKYSPACE_HPP
#define LUCKYSPACE_HPP

#include "Space.hpp"

class LuckySpace : public Space
{
	private:

	public:
		LuckySpace();
		void action();
		int getItem();
		int buff();
};
#endif
