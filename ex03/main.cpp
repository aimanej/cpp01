#include "humanA.hpp"
#include "humanB.hpp"
#include "weapon.hpp"

int main()
{
    // Weapon club = Weapon("spear");
    // HumanA human("aries", club);
    // human.attack();
    // club.setType("new type");
    // human.attack();

    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}