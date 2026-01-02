#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << name << " was purified" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::namer(std::string name)
{
    Zombie::name = name;
}

