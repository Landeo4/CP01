#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
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
		std::cout << "puching aggresively " << std::endl;
		return ;
	}
	std::cout << getWeapon()->getType() << std::endl;
}
