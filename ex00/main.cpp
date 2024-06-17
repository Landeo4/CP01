#include "Zombie.hpp"

int main()
{
	Zombie	zomb;

	zomb.randomChump("Zombie");
	Zombie *zomb2 = zomb.newZombie("Zombie2");
	zomb2->announce();
	delete(zomb2);
	return (0);
}

// faire main test pour prouver que ca fonctionne