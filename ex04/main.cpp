#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string line;
	std::string	new_name;
	std::string s1;
	std::string s2;
	std::ifstream    in_file;
	std::ofstream    out_file;
	size_t  pos;

	if (argc != 4)
	{
		std::cout << "Usage: ./sed nameFile s1 s2" << std::endl;
		return (1);
	}
	in_file.open(argv[1]);
	if (in_file)
	{
		new_name = argv[1];
		new_name.append(".replace");
		out_file.open(new_name.c_str());
		if (out_file)
		{
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
		in_file.close();
	}
	return (0);
}
