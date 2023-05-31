/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:52:13 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 15:27:12 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		
		HumanA(std::string name, Weapon &weapon);
		
		void	attack(void);
		void	setWeapon(Weapon weapon);

	private:

		HumanA(void);

		std::string	name;
		Weapon		weapon;
};
#endif
