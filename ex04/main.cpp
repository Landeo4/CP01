
#include "Replace.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Please put 4 argument" << std::endl;
		return (0);
	}
	if (argv[2] == NULL|| argv[3] == NULL)
	{
		std::cout << "Please put valid arguments" << std::endl;
		return 0;
	}
	Replace obj;

	obj.copy(argv);
}

// cree prog qui prend trois param
// filename s1 s2
// open file remplacer s1 par s2
//viral hit