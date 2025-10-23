#include "weapon.hpp"

std::string& weapon::getType()
{
    std::string& typeref = type;
    return typeref;
}

void weapon::setType(std::string newtype)
{
    type = newtype;
}