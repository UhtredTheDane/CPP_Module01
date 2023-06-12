/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:48:19 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/12 19:01:51 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

void    Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;	
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl; 
	std::cout << "I really do !" << std::endl << std::endl;
}

void    Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;	
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger !" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void    Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;	
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;	
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void    Harl::complain(std::string level)
{
	std::string level_types[] = {"debug", "info", "warning", "error"};
	void	(Harl::*levels_ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; ++i)
	{
		if (level == level_types[i])
		{
			(this->*levels_ptr[i])();
			break;
		}
	}	
}
