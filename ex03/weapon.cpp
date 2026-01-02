#include "weapon.hpp"

std::string const& Weapon::getType()
{
    std::string& typeref = _type;
    return typeref;
}

void Weapon::setType(std::string newtype)
{
    _type = newtype;
}

Weapon::Weapon(std::string arm)
{
    Weapon::_type = arm;
}

