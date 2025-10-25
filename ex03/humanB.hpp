#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "weapon.hpp"

class weapon;

class humanB
{
private:
    std::string name;
    weapon *arm;

public:
    void attack();
    humanB(std::string str) : name(str){}
    void setWeapon(weapon& club);
};

#endif