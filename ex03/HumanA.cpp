#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA(std::string weapon, std::string name) weapon("club"), name("bob");

HumanA::HumanA(std::string name, )
{
	this->name = name;
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}
