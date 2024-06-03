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
	this->_type = club;
}

std::string Weapon::getType(void)
{
	return this->_type;
}
