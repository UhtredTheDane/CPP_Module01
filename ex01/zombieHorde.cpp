/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:22:25 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 11:39:42 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde;

	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	for (int i = 0; i < N; ++i)
		horde[i].set_name(name);
	return (horde);
}
