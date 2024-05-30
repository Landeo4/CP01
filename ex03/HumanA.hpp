#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>

class HumanA{
	public:
	HumanA(std::string name, Weapon);
	std::string weapon;
	void attack(void);
	~HumanA(void);
	private:
};

#endif