#include "Zombie.hpp"

int main()
{
    // zombie ll("zz");
    zombie *test = newZombie("test");

    randomChum("test22");
    test->announce();
    
    delete test;
}