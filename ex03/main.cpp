/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:51:54 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/13 15:24:57 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("Short Sword");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Long Spear");
		bob.attack();
	}
	{
		Weapon club = Weapon("Short Sword");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Long Spear");
		jim.attack();
	}
	return (0);
}
