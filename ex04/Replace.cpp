#include "Replace.hpp"

Replace::Replace(void)
{
	return ;
}

Replace::~Replace(void)
{
	return ;
}

void Replace::setDest(std::string dest)
{
	this->_dest = dest;
}

std::string Replace::getDest(void)
{
	return this->_dest;
}

std::string Replace::getCur(void)
{
	return this->_cur;
}

void Replace::setCur(std::string cur)
{
	this->_cur = cur;
}

void Replace::copy(char** argv)
{
	std::ifstream inf(argv[1]);

	std::string	abc;
	abc = argv[1];
	std::string	wef;
	wef = abc + ".replace";

	std::ofstream ouf(wef.c_str());
	std::filebuf* pbuf = inf.rdbuf();
	std::size_t size = pbuf->pubseekoff(0, inf.end, inf.in);
	pbuf->pubseekpos(0, inf.in);
	char* buf = new char[size + 1];
	pbuf->sgetn(buf, size + 1);
	inf.close();
	this->setCur(argv[2]);
	this->setDest(argv[3]);
	int i = 0;
	int c = 0;
	int j = 0;
	int x = 0;
	int tmp = 0;
	while (argv[2][c])
		c++;
	int len = c;
	char* fin = new char [size + 1];
	while (buf[i + 1])
	{
		c = 0;
		x = i;
		tmp = i;
		while (buf[tmp] == argv[2][c])
		{
			if (c == (len - 1))
			{
				c = 0;
				while (argv[3][c])
				{
					fin[j] = argv[3][c];
					j++;
					c++;
				}
			}
			c++;
			tmp++;
		}
		while (x < i)
		{
			fin[j] = buf[x];
			x++;
		}
		fin[j] = buf[i];
		j++;
		i++;
	}
	fin[j] = buf[i];
	j++;
	fin[j] = '\0';
	ouf << fin;
	delete [] buf;
	delete [] fin;
	ouf.close();
}
