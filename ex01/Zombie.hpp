#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>
#include <new>
#include <stdlib.h>

class Zombie{
	public:
	Zombie(void);
	Zombie* zombieHorde(int N, std::string name);
	void announce(void);

	~Zombie(void);
	private:
	std::string _name;
};

#endif