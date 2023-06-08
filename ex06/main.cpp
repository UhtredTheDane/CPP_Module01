#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl    harl;
	int	num_complain;
	std::string levels[] = {"debug", "info" ,"warning" ,"error"};

	if (argc != 2)
	{
		std::cout << "Usage: ./HarlFilter level" << std::endl;
		return (1); 
	}
	num_complain = -1;
	for (int i = 0; i < 4; ++i)
	{
		if (argv[1] == levels[i])
			num_complain = i;
	}
	switch (num_complain)
	{
		case 0:	harl.complain("debug");
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case 1: harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case 2: harl.complain("warning");
			harl.complain("error");
			break;
		case 3: harl.complain("error");
			break;
		default:std::cout << "Euh je sais pas quoi dire" << std::endl;
	}
	return (0);
}
