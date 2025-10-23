#include "Zombie.hpp"

zombie *zombiehorde(int n, std::string name)
{
    zombie *ret = new zombie[n];

    int t = 0;
    while (t < n)
    {
        ret[t].namer(name);
        t++;
    }
    return ret;
}

int main()
{
    int n = 4;
    zombie *zz = zombiehorde(n, "zzzs");

    // zombie kk;
    // kk.namer("lala");
    // kk.announce();
    zombie *ss = zz;
    for (int t = 0; t < n; t++)
    {
        (*zz).announce();
        zz++;
    }
    delete[] ss;
    // zz[3].announce();
    // int x = 10;
    // std::cout << x;
    // std::cout << '\n';
}