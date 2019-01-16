/*********************************************************************
** Program name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Bag.cpp is the Bag class function implemenation file.
*********************************************************************/
#include "Bag.hpp"

#include <iostream>
#include <iterator>
#include <list>
using std::list;
using std::cout;
using std::endl;

/*********************************************************************
Description: This function takes an integer representing an itemNumber
	     and add that item to the end of the list.
*********************************************************************/
void Bag::addItem(int itemNum)
{
	myBag.push_back(itemNum);
}

/*********************************************************************
Description: This function takes an integer representing an itemNumber
	     and removes that item from the list.
*********************************************************************/
void Bag::deleteItem(int itemNum)
{
	myBag.remove(itemNum);
}

/*********************************************************************
Description: This function takes in no parameter and iterate through
	     the list to display its contents.
*********************************************************************/
void Bag::printBag()
{
	list<int>::iterator iter;

	cout << "------------------------------------------------\n";
	cout << "\tBag Contents";
	cout << "\n------------------------------------------------\n";

	for (iter = myBag.begin(); iter != myBag.end(); iter++)
	{
		// 111 = weapon, 222 = potion, 333 = key
		if (*iter == 111)
		{
			cout << "Weapon\n";
		}
		else if (*iter == 222)
		{
			cout << "Potion\n";
		}
		else if (*iter == 333)
		{
			cout << "Key\n";
		}

	}
	cout << endl;
}
