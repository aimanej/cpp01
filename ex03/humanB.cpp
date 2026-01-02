// #include "weapon.hpp"
#include "humanB.hpp"

HumanB::HumanB(std::string str)
{
    _name = str;
}

void HumanB::setWeapon(Weapon& club)
{
    _arm = &club;
}

void HumanB::attack()
{
    std::cout << _name << " attacked with their " << (*_arm).getType() << std::endl;
}