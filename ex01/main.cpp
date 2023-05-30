#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    Zombie  *horde;
    int N;

    N = 10;
    horde = zombieHorde(N, "Villageois-Zombie");
    if (horde)
    {
        for (int i = 0; i < N; ++i)
            horde[i].announce();
    }
    delete [] horde;
    return (0);
}