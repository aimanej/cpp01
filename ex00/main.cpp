#include "Zombie.hpp"

int main()
{
    Zombie *test = newZombie("test");

    randomChum("test22");
    test->announce();
    
    delete test;
}