#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	srand(time(NULL));


    try
    {
        Bureaucrat bob("bob", 150);
        Form *form = new PresidentialPardonForm("president");
        bob.executeForm(*form);
        //Exception: Form not signed
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "------------" << std::endl;
        Bureaucrat bob("bob", 150);
        Form *form = new PresidentialPardonForm("president");
        Form *rob = new RobotomyRequestForm("Robot");
        Form *shr = new ShrubberyCreationForm("Shrubbery");
        form->beSigned(bob);
        rob->beSigned(bob);
        shr->beSigned(bob);
        bob.executeForm(*form);
        bob.executeForm(*rob);
        bob.executeForm(*shr);
        //Exception: Form not signed - NO!!!
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "---------------" << std::endl;
        Bureaucrat bob("bob", 24);
        Form *form = new PresidentialPardonForm("president");
        form->beSigned(bob);
        bob.executeForm(*form);
        //Exception: Form not signed - NO!!!
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }

	return (0);
}