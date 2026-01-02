#include "Zombie.hpp"

int main()
{
    int n = 5;
    Zombie *zz = zombieHorde(n, "zzzs");

    for (int t = 0; t < n; t++)
    {
        zz[t].announce();
    }
    delete[] zz;
}