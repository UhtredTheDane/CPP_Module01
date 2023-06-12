/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:48:23 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/12 19:02:59 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:

		Harl(void);

		void    complain(std::string level);

	private:

		void    debug(void);
		void    info(void);
		void    warning(void);
		void    error(void);
};
#endif
