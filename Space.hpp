/********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Space.hpp is the Space class header file. This is 
		    the base class for all dervied classes.
*********************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP
#include<string>
using std::string;

class Space
{
	protected:
		Space *top;
		Space *bottom;
		Space *right;
		Space *left;
		string name;

	public:
		Space();
		virtual void action() = 0;
		virtual int getItem() = 0;
		virtual int buff() = 0;
		int spaceMenu();
		void setLeft(Space*);
		void setRight(Space*);
		string getName();
		Space* getLeft();
		Space* getRight();
		int randomNum(int, int);
};
#endif
