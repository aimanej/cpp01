#include "weapon.hpp"

int main()
{
    // weapon club = weapon("spear");
    // humanA human("aries", club);
    // human.attack();
    // club.setType("new type");
    // human.attack();

    weapon club = weapon("crude spiked club");
    humanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}