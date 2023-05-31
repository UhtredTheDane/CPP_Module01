/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:22:29 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 11:40:24 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:

		Zombie(std::string name);
		Zombie(void);	
		~Zombie(void);
		
		void    set_name(std::string name);
		void    announce(void);

	private:

		std::string name;
};
#endif
