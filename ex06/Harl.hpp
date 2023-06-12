/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:41:05 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/12 18:59:05 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <ctype.h>

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
