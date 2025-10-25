#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "weapon.hpp"

// class weapon;

class humanA
{
private:
    std::string name;
    weapon& arm;
public:
    void attack();
    humanA(std::string gun, weapon& club) : name(gun), arm(club) {}
};

#endif