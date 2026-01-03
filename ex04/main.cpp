#include <iostream>
#include <fstream>

int main(int ac, char **av)
{

    if (ac != 4)
    {
        std::cerr << "wrong number of params" << std::endl;
        return 1;
    }
    std::string file_name = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (file_name.empty() || s1.empty())
    {
        std::cerr << "no empty string allowed" << std::endl;
        return 1;
    }
    std::ifstream file1(file_name.c_str());
    if (!file1.is_open())
    {
        std::cerr << "error opening the file" << std::endl;
        return 1;
    }

    std::string new_name = file_name + ".replace";
    std::ofstream file2(new_name.c_str());

    if (!file2.is_open())
    {
        std::cerr << "error opening the file" << std::endl;
        return 1;
    }

    std::string str;
    while(std::getline(file1, str))
    {
        size_t pos = 0;
        while((pos = str.find(s1, pos)) != std::string::npos)
        {
            str.erase(pos, s1.size());
            str.insert(pos, s2);
            pos += s2.size();
        }
        file2 << str;
        if(file1.peek() != EOF)
            file2 << std::endl;
    }
    return 0;
}   