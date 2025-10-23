#include "Zombie.hpp"

void zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}


zombie *zombie::newZombie(std::string name)
{
    
}

void zombie::randomChum(std::string name)
{
    zombie newo(name);
    newo.announce();
}