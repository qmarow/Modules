#include "Form.hpp"

int     main(void)
{
    try
    {
        std::cout << "-------------Подписываем--------------" << std::endl;
        Bureaucrat vova("Vova", 140);
        Form form("journal", 140, 140);
		std::cout << form;
        std::cout << vova;
        form.beSigned(vova);
        vova.signForm(form);
		std::cout << form;
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "-------------Подписываем--------------" << std::endl;
        Bureaucrat vova("Vova", 139);
        Form form("journal", 140, 140);
		vova.signForm(form);
        vova.high();
        vova.signForm(form);
		std::cout << form;
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "-------------Не подписываем--------------" << std::endl;
        Bureaucrat vova("Vova", 139);
        Form form("journal", 140, 140);
		form.beSigned(vova);
		std::cout << "-------------------------------";
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "------------Exceptioin---------------" << std::endl;
        Form form("journal", 151, 140);
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "------------Exceptioin---------------" << std::endl;
        Form form("journal", 1, 0);
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }
}