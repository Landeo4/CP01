#include "Zombie.hpp"

int main()
{
	Zombie zomb;

	Zombie *zomb2 = zomb.zombieHorde(5, "Alexis");
	for (int i = 0; i < 5; i++)
	{
		zomb2[i].announce();
	}
	delete(zomb2);
	return (0);
}
