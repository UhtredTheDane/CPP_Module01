#include "HumanB.hpp"

HumanB::HumanB(void) : name(0), weapon(0)
{

}

HumanB::HumanB(std::string name) : weapon(0)
{
    this->name = name;
}

void setWeapon(Weapon weapon)
{
    this->weapon =
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}