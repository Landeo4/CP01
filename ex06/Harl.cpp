#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;

	f fct[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::error};
	std::string str[4] = {"debug", "info", "warning", "error"};
	if (level != "debug" || level != "info" || level != "warning" || level != "error")
	{
		std::cout << "problem with your input" << std::endl;
		return ;
	}
	switch (4)
	{
	case 1:
		f neew = fct[0];
		(this->*neew)();
		break;
	case 2:
		f neew = fct[1];
		(this->*neew)();
		break;
	case 3:
		f neew = fct[2];
		(this->*neew)();
		break;
	case 4:
		f neew = fct[3];
		(this->*neew)();
		break;
	default:
		break;
	}
	// while (i < 4 && level.compare(str[i]) != 0)
	// 	i++;
	// if (i < 4)
	// {
	// 	f neew = fct[i];
	// 	(this->*neew)();
	// }
	// else
}

//idee pour faire cette exo:
// utiliser le meme fonctionnement que map en mettant une clef par valeur
// cette clef sera utiliser dans chaque fonction qui aura son propre cadena
// qui pourra donc etre ouvert ou non

// utilise les pointeurs sur fonctions pas de if else if else
