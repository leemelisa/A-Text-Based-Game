/*********************************************************************
** Program name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     FinalSpace.hpp is the class header file. FinalSpace
		    class is the derived class of the base class Space.
*********************************************************************/

#ifndef FINALSPACE_HPP
#define FINALSPACE_HPP

#include "Space.hpp"

class FinalSpace : public Space
{
	private:

	public:
		FinalSpace();
		void action();
		int getItem();
		int buff();
};
#endif
