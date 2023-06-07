#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    harl;
    if (argc != 2)
    {
        std::cout << "Usage: ./HarlFilter level" << std::endl;
        return (1); 
    }
    switch ()
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    return (0);
}
