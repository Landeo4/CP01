#include "HumanB.hpp"

HumanB::HumanB(std::string club)
{
	setType(club);
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setWeapon(std::string club)
{
	std::string* str = &club;
	this->_type = *str;
}

std::string HumanB::getWeapon(void)
{
	return (this->_);
} 

void HumanB::attack(void)
{
	std::cout << this->getWeapon() << std::endl;
}
