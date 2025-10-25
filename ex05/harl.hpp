#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class harl{
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        void complain(std::string level);

};
#endif