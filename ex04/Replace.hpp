#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string.h>
#include <iostream>
#include <fstream>
#include <new>
#include <string>
#include <algorithm>

class Replace{
	public:
	Replace(void);

	void setDest(std::string dest);
	std::string getDest(void);
	void setCur(std::string cur);
	std::string getCur(void);
	void copy(char** argv);
	~Replace(void);

	private:
	std::string _dest;
	std::string	_cur;
};

#endif