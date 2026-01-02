#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    void announce(void);
    void namer(std::string name);
    ~Zombie();
};
void randomChum(std::string name);
Zombie *newZombie(std::string name);

#endif