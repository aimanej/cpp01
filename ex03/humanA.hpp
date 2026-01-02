#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "weapon.hpp"


class HumanA
{
private:
    std::string _name;
    Weapon& _arm;
public:
    void attack();
    HumanA(std::string name, Weapon& club): _name(name), _arm(club){}
};

#endif