#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>

class HumanA{
	public:
	HumanA(std::string name, Weapon& club);
	void attack(void);
	~HumanA(void);
	private:
	std::string _name;
	Weapon& _weapon;
};

#endif