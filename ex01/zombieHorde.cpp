#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie *zomb = new Zombie[N];

	while (N-- > 0)
		zomb[N]._name = name;
	return (zomb);
}
