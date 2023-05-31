/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:52:26 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 15:49:35 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{

}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void    HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
