/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:41:20 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/12 18:58:45 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	select_choice(std::string& choice)
{
	std::string levels[] = {"DEBUG", "INFO" ,"WARNING" ,"ERROR"};
	for (size_t i = 0;i < choice.length(); ++i)
		choice.at(i) = std::toupper(choice.at(i));
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

	switch (select_choice(choice))
	{
		case 0:	harl.complain("debug");
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case 1:	harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case 2:	harl.complain("warning");
			harl.complain("error");
			break;
		case 3:	harl.complain("error");
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
