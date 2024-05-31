#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	public:
	HumanB(std::string club);
	std::string getWeapon(void);
	void setWeapon(std::string club);
	void attack(void);
	~HumanB(void);
	private:
	std:: string _name;
	Weapon* weapon;

};

#endif