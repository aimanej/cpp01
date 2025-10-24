#include "weapon.hpp"

std::string& weapon::getType()
{
    std::string& typeref = type;
    return typeref;
}

void weapon::setType(std::string newtype)
{
    std::string& ref = getType();
    ref = newtype;
    // type = newtype;
}

weapon::weapon(std::string arm)
{
    weapon::type = arm;
}

