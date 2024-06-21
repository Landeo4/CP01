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
	std::string	wef;
	std::string	abc;
	abc = argv[1];
	wef = abc + ".replace";
	std::ofstream ouf(wef.c_str());
	std::filebuf* pbuf = inf.rdbuf();
	std::size_t size = pbuf->pubseekoff(0, inf.end, inf.in);
	pbuf->pubseekpos(0, inf.in);
	char * buf = new char[size + 1];
	pbuf->sgetn(buf, size + 1);
	std::string buf2 = buf;
	std::string ar2 = argv[2];
	std::string ar3 = argv[3];
	int curr = 0;
	inf.close();
	std::size_t pos = 0;
	while (42)
	{
		pos = buf2.find(argv[2], curr);
		if (pos == std::string::npos)
			break;
		buf2.erase(pos, ar2.size());
		buf2.insert(pos, argv[3]);
		curr = pos + ar3.size();
	}
	ouf << buf2;
	ouf.close();
}
