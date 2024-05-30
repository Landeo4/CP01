#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>
#include <new>

class Zombie{
	public	:
	Zombie(void);
	void setName(std::string name);
	std::string getName(void);
	void announce(void);
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
	~Zombie(void);

	private:
	std::string _name;
};

#endif