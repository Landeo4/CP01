#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void Weapon::setWeapon(std::string str)
{
	this->_type = str;
}

std::string const Weapon::getWeapon(void)
{
	return this->_type;
}
