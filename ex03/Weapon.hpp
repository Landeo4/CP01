#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "string.h"
#include <iostream>

class Weapon{
	public:
	Weapon(void);
	void setWeapon(std::string str);
	std::string const getWeapon(void);
	~Weapon(void);
	private:
	std::string _type;

};

#endif