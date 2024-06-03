#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	public:
	HumanB(std::string name);
	void setWeapon(Weapon &club);
	Weapon *getWeapon(void);
	void attack(void);
	~HumanB(void);
	private:
	std:: string _name;
	Weapon* _weapon;
};

#endif