#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void    println(T str)
{
    int i = -1;
    std::cout << "println: " << str << std::endl;
}

template <typename T>
void    iter(T *mass, int len, void (*f)(T))
{
    for (int i = 0; i < len; i++)
        f(mass[i]); 
}

#endif
