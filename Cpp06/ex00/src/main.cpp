#include "../header/ScalarConverter.hpp"


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout<< "wrong format"<<std::endl;
		return 0;
	}
	ScalarConverter test;
	test.convert(argv[1]);
	return 0;
}
