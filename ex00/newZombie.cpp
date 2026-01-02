#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *cl = new Zombie;
    cl->namer(name);
    return cl;
};
