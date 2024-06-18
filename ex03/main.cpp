#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	Weapon club = Weapon("crude spiked club");
	HumanB tommy("Tommy");
	tommy.attack();
	tommy.setWeapon(club);
	tommy.attack();
	club.setType("some other type of club");
	tommy.attack();
	return 0;
}

// HumanA have a weapon all time HumanB not everytime