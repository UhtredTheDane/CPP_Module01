/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:04:07 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 11:23:50 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " retourne à la poussière." << std::endl;
}

void    Zombie::announce(void)
{
	std::cout << this->name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
