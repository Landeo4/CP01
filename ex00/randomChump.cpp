#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie instance;

	instance.setName(name);
	instance.announce();
}
