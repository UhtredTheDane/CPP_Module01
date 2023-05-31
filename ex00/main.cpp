/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:57:27 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 11:18:30 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
	Zombie*	zombie1;
	Zombie	zombie2("Ner'Zul");

	//Alloué sur la heap
	zombie1 = newZombie("Kel'Thuzad");
	zombie1->announce();
	delete zombie1;

	//Alloué sur la stack
	zombie2.announce();
	randomChump("Arthas");
	return (0);
}
