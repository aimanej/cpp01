#include <iostream>
#include <fstream>

int main(int ac, char **av)
{

    if (ac != 4)
    {
        std::cout << "wrong number of params";
        return 1;
    }
    std::string file_name = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (file_name.empty() || s1.empty() || s2.empty())
    {
        std::cout << "no empty string allowed";
        return 1;
    }

    // std::cout << "checking";

    std::fstream file1(file_name, std::ios::in);
    if (!file1.is_open())
    {
        std::cout << "error opening the file\n";
        return 1;
    }

    std::string new_name = file_name + ".replace";
    std::fstream file2(new_name, std::ios::out);

    if (!file2.is_open())
    {
        std::cout << "error opening the file\n";
        return 1;
    }

    std::string str;
    // file >> str;
    while(std::getline(file1, str))
    {
        int pos = 0;
        pos = str.find(s1);
        if(pos >= 0)
        {

            str.erase(pos, s1.size());
            str.insert(pos, s2);
            file2 << str << std::endl;
            // std::cout << str;
        }
        else
            file2<< str << std::endl;
    }

    file1.close();
    file2.close();
}   