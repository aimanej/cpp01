#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "weapon.hpp"

class Weapon;

class HumanB
{
private:
    std::string _name;
    Weapon* _arm;

public:
    void attack();
    HumanB(std::string str);
    void setWeapon(Weapon& club);
};

#endif