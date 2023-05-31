/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:52:34 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 20:05:17 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		
		HumanB(std::string name);

		void	attack(void);
		void	setWeapon(Weapon &weapon);

	private:

		HumanB(void);

		std::string	name;
		Weapon		*weapon;

};
#endif
