#include "Zombie.hpp"

void zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}


zombie *newZombie(std::string name)
{
    zombie *cl = new zombie;
    cl->namer(name);
    return cl;
};

void randomChum(std::string name)
{
    zombie newo;
    newo.namer(name);
    newo.announce();
}