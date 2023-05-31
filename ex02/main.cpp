/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:49:10 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/31 11:49:20 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string myString("HI THIS IS BRAIN");
	std::string *stringPTR(&myString);
	std::string& stringREF(myString);

	std::cout << "Adresse myString en mémoire: " << &myString << std::endl;
	std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl;

	std::cout << std::endl << "Valeur myString: " << myString << std::endl;
	std::cout << "Valeur pointée par stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valeur pointée par stringREF: " << stringREF << std::endl;
	return (0);
}
