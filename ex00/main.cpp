#include <string>
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie  zombie1;

    //Alloué sur la heap
    zombie1 = newZombie("Kel'Thuzad");
    zombie1.announce();
    delete zombie1;

    //Alloué sur la stack
    randomChump("Arthas");
    return (0);
}