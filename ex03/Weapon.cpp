/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:52:41 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 16:08:55 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string&	Weapon::getType(void)
{
	return (type);
}

void        Weapon::setType(std::string type)
{
	this->type = type;
}
