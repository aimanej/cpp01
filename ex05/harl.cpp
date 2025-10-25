#include "harl.hpp"

void harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void harl::error()
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harl::complain(std::string level)
{
    void (harl::*ptrdebug[4])() = {&harl::debug, &harl::info, &harl::warning, &harl::error};

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int t = 0; t < 4; t++)
    {
        if(levels[t] == level)
        {
            (this->*ptrdebug[t])();
        }
    }
    
}