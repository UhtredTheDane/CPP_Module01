/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:53:55 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/12 19:04:41 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:

		Weapon(void);
		Weapon(std::string type);

		const std::string&	getType(void);
		void			setType(std::string type);

	private:

		std::string	type;

};
#endif
