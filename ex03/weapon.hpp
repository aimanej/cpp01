#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class weapon
{
private:
    std::string type;

public:
    std::string &getType();
    void setType(std::string newtype);
    weapon(std::string arm);
};

class humanA
{
private:
    std::string name;

public:
    weapon &arm;
    void attack();
    humanA(std::string gun, weapon club) : name(gun), arm(club) {}
};

class humanB
{
private:
    std::string name;

public:
    void attack();
    humanB(std::string str) : name(str){}
    // ~humanB(){delete arm;};
    weapon *arm;
    void setWeapon(weapon club);
};

#endif