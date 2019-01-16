/*********************************************************************
** Program name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Bag.hpp is the class header file, that utilize STL
		    containers.
*********************************************************************/
#ifndef BAG_HPP
#define BAG_HPP

#include <list>
using std::list;

class Bag 
{
	private:
		list <int> myBag;
	public:
		void addItem(int);
		void deleteItem(int);
		void printBag();
};
#endif
