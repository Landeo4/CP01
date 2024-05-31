#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "string.h"
#include <iostream>

class Weapon{
	public:
	Weapon(std::string club);
	void setType(std::string str);
	std::string const getWeapon(void);
	void Weapon::setWeapon(std::string club);
	~Weapon(void);
	private:
	std::string _type;

};

#endif