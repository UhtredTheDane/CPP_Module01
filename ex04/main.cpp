#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    std::string line;
    std::string	new_name;
    ifstream    in_file;
    ofstream    out_file;
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
        new_name = append(".replace");
        out_file.open(new_name);
        if (out_file)
        {
            while (getline(input_file, line))
            {
                if ((pos = line.find(argv[2], 0)) != -1)
                {
                    line.insert(pos, argv[3]);
                }
                in_file << line << std::endl;
            }
            out_file.close();
        }
        in_file.close();
    }
    return (0);
}