// #include "weapon.hpp"
#include "humanB.hpp"

void humanB::setWeapon(weapon& club)
{
    arm = &club;
    // arm = new weapon(club.getType());
    // arm = &club;
    // std::cout << "we here : " << arm->getType();
}

void humanB::attack()
{
    std::cout << name << " attacked with their" << (*arm).getType() << "\n";
}