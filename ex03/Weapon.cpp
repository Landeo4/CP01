#include "Weapon.hpp"

Weapon::Weapon(std::string club)
{
	setType(club);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void Weapon::setType(std:: string club)
{
	std::string& str = club;
	this->_type = club;
}

std::string const Weapon::getWeapon(void)
{
	return this->_type;
}
