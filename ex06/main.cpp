#include "Harl.hpp"

int	select_choice(std::string& choice)
{
	std::string levels[] = {"debug", "info" ,"warning" ,"error"};

	for (int i = 0; i < 4; ++i)
	{
		if (choice == levels[i])
			return (i);
	}
	return (-1);
}

void	filter_menu(std::string choice)
{
	Harl    harl;
	int	num_complain;

	num_complain = select_choice(choice);
	switch (num_complain)
	{
		case 0:	std::cout << "[ DEBUG ]" << std::endl;	
			harl.complain("debug");
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case 1: std::cout << "[ INFO ]" << std::endl;
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case 2:	std::cout << "[ WARNING ]" << std::endl; 
			harl.complain("warning");
			harl.complain("error");
			break;
		case 3:	std::cout << "[ ERROR ]" << std::endl;
			harl.complain("error");
			break;
		default:std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./HarlFilter level" << std::endl;
		return (1); 
	}
	filter_menu(argv[1]);
	return (0);
}
