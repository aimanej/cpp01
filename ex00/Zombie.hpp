#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class zombie{
    // typedef class Zombie Zombie;

    zombie(std::string name)
    {
        name = name;
    }

    ~zombie()
    {
        std::cout << name << "took a stake through the heart\n";
    };
    private:
        std::string name;
    public:
        void announce(void);
        class zombie* newZombie(std::string name);
        void randomChum(std::string name);
        
};


#endif