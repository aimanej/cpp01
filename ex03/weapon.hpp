#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class Weapon
{
private:
    std::string _type;

public:
    std::string const &getType();
    void setType(std::string newtype);
    Weapon(std::string arm);
};




#endif