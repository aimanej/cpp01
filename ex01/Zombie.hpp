#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class zombie
{
private:
    std::string name;

public:
    void announce(void);
    // zombie(std::string name)
    // {
    //     zombie::name = name;
    // }
    void namer(std::string name)
    {
        zombie::name = name;
    }
    ~zombie()
    {
        std::cout << name << " was purified\n";
    };
};
void randomChum(std::string name);
zombie *newZombie(std::string name);

#endif