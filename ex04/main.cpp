#include <iostream>
#include <string>
#include <fstream>

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

void	ft_sed(char **argv)
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
			find_and_replace(in_file, out_file);
		in_file.close();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed nameFile s1 s2" << std::endl;
		return (1);
	}
	ft_sed(argv);
	return (0);
}
