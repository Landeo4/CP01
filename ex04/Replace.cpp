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
	std::ofstream ouf("dest.txt");
	std::string str;
	std::filebuf* pbuf = inf.rdbuf();
	std::size_t size = pbuf->pubseekoff(0, inf.end, inf.in);
	pbuf->pubseekpos(0, inf.in);
	char* buf = new char[size];
	pbuf->sgetn(buf, size);

	this->setCur(argv[2]);
	this->setDest(argv[3]);
	// std::cout << buf;
	int i = 0;
	int c = 0;
	int j = 0;
	int x = 0;
	while (argv[2][c])
		c++;
	int len = argv[2][c];
	char* fin = new char [size];
	while (buf[i])
	{
		c = 0;
		x = i;
		while (buf[i] == argv[2][c])
		{
			if (c == len)
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
			i++;
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
	std::cout << "voici mon input " << fin;
	// delete(buf);
	inf.close();
	ouf.close();
}
