/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:22:27 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/12 16:05:59 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	Zombie  *horde;
	int	N;

	N = 10;
	horde = zombieHorde(N, "Villageois-Zombie");
	if (horde)
		for (int i = 0; i < N; ++i)
			horde[i].announce();
	delete [] horde;
	N = 20;
	horde = zombieHorde(N, "Uni-Zombie");
	if (horde)
		for (int i = 0; i < N; ++i)
			horde[i].announce();
	delete [] horde;
	return (0);
}
