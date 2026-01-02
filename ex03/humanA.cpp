#include "humanA.hpp"

void HumanA::attack()
{
    std::cout << _name << " attacked with their " << _arm.getType() << std::endl;
}