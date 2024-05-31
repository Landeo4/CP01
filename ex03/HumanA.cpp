#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA(std::string weapon, std::string name) weapon("club"), name("bob");
// liste d'initialisation
HumanA::HumanA(std::string name, Weapon& club): _name(name), _weapon(club){}
// {
// 	this->setName(name);
// 	&this->weapon = club.getWeapon();
// 	return ;
// }

HumanA::~HumanA(void)
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_weapon << std::endl;
}
