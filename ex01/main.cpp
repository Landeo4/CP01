#include "Zombie.hpp"

int main()
{
	Zombie zomb;

	Zombie *zomb2 = zomb.zombieHorde(1000, "Alexis");
	for (int i = 0; i < 1000; i++)
	{
		zomb2[i].announce();
	}
	delete [] zomb2;
	return (0);
}
