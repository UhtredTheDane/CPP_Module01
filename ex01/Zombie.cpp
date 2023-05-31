/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:22:28 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 11:44:10 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << "retourne à la poussière." << std::endl;
}

void    Zombie::set_name(std::string name)
{
	this->name = name;
}

void    Zombie::announce(void)
{
	std::cout << this->name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
