#include "Zombie.hpp"

Zombie::Zombie(string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << "retourne à la poussière." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}