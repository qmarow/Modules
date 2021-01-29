#include "Serialization.hpp"

void    randomNumb(char *mass)
{
    int ch;
    for (int i = 0; i < 8; i++)
    {
        ch = rand () % 127;
        if (ch < 33)
            ch += 33;
        mass[i] = ch;
    }
}

void    *serialize(void)
{
    char *mass = new char[20];
    randomNumb(mass);
    *reinterpret_cast<int*>(mass + 8) = rand();
    randomNumb(mass + 12);
    return (mass);
}

Data    *deserialize(void * raw)
{
    Data    *mass = new Data;

    mass->s1 = std::string(reinterpret_cast<char*>(raw), 8);
    mass->n = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + 8);
    mass->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 12);
    return (mass);
}

