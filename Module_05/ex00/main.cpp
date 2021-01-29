#include "Bureaucrat.hpp"

int     main(void)
{
    try
    {
        Bureaucrat vova("Vova", 150);
        std::cout << vova;
        vova.low();
        std::cout << vova;
        vova.high();
        std::cout << vova;
        vova.high();
        std::cout << vova;
        std::cout << "!!!!!!!!!!!!!" << std::endl;
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat vova("Vova", 151);
        std::cout << "!!!!!!!!!!!!!" << std::endl;
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "------------------" << std::endl;

    try
    {
        Bureaucrat vova("Vova", 1);
        std::cout << vova;
        vova.low();
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat vova("Vova", 0);
        std::cout << vova;
        vova.low();
        std::cout << vova;
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}