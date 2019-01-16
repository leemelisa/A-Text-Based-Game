/*********************************************************************
** Program Name:    A Text-based Game
** Author:          Melisa Lee
** Date:            11/26/2018
** Description:     Menu.hpp is the function Menu header file.
*********************************************************************/

#ifndef MENU_HPP
#define MENU_HPP

#include<string>
#include <vector>
using std::string;
using std::vector;

class Menu
{
private:
	vector <string> libary;
	int userChoice;

public:
	void addOption(string);
	void printOptions();
	void setUserOption();
	int getUserChoice();
	void printMenu();
	void displayHeader(string);
};

#endif
