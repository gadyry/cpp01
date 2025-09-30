#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harl_filter <level>"<< std::endl;
		return (1);
	}

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string input = argv[1];
	Harl harl;
	size_t index = -1377;

	for (size_t i = 0; i < 4; i++)
	{
		if (input == levels[i])
		{
			index = i;
			break;
		}
	}

	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			harl.complain("DEBUG");
			//fall through
		case 1:
			std::cout << "\n[ INFO ]\n";
			harl.complain("INFO");
			//fall through
		case 2:
			std::cout << "\n[ WARNING ]\n";
			harl.complain("WARNING");
			//fall through
		case 3:
			std::cout << "\n[ ERROR ]\n";
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}

	return (0);
}

