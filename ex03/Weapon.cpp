#include "Weapon.hpp"

Weapon::Weapon() : type(0)
{

}

Weapon::Weapon(std:string type)
{
    this->type = type;
}

std::string Weapon::getType(void)
{
    return (type);
}

void        Weapon::setTypes(std::string type)
{
    this->type = type;
}