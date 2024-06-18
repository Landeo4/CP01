#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setWeapon(Weapon &club)
{
	this->_weapon = &club;
}

Weapon* HumanB::getWeapon(void)
{
	return this->_weapon;
}

void HumanB::attack(void)
{
	if (!this->_weapon)
	{
		std::cout << this->_name << " can't attack " << std::endl;
		return ;
	}
	std::cout << this->_name << " use " << getWeapon()->getType() << std::endl;
}
