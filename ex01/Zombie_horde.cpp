#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *ret = new Zombie[n];

    int t = 0;
    while (t < n)
    {
        ret[t].namer(name);
        t++;
    }
    return ret;
}