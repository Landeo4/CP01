#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	if (N > 2147483647)
	{
		std::cout << "Please enter a integer below IN_MAX" <<std::endl;
		exit (1);
	}
	if (N < 0)
	{
		std::cout << "Please enter a positive interger" << std::endl;
		exit (1);
	}
	if (N > 50000)
	{
		std::cout << "to many zombie in the horde, nuclear bomb deployed" << std::endl;
		exit (1);
	}
	Zombie *zomb = new Zombie[N];

	while (N-- > 0)
		zomb[N]._name = name;
	return (zomb);
}
