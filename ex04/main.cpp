/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:27:09 by agengemb          #+#    #+#             */
/*   Updated: 2023/06/13 15:05:41 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	error_manager(char *fileName, int num)
{
	if (num == 1)
		std::cout << "Le fichier " << fileName << " est introuvable." << std::endl;	
	else
		std::cout << "Erreur avec le fichier " << fileName << ".replace ." << std::endl;
	return (num);
}

void	find_and_replace(char **argv, std::ifstream& in_file, std::ofstream& out_file)
{
	std::string line;
	std::string s1;
	std::string s2;
	size_t  pos;

	s1 = argv[2];
	s2 = argv[3];
	while (getline(in_file, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != line.npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		out_file << line << std::endl;
	}
	out_file.close();
}

int	ft_sed(char **argv)
{
	std::string	new_name;
	std::ifstream    in_file;
	std::ofstream    out_file;

	in_file.open(argv[1]);
	if (in_file)
	{
		new_name = argv[1];
		new_name.append(".replace");
		out_file.open(new_name.c_str());
		if (out_file)
			find_and_replace(argv, in_file, out_file);
		else
			return (error_manager(argv[1], 2));
		in_file.close();
	}
	else
		return (error_manager(argv[1], 1));
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed nameFile s1 s2" << std::endl;
		return (1);
	}
	return (ft_sed(argv));
}
