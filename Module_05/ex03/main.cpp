// #include "PresidentialPardonForm.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	srand(time(NULL));
    try
    {
        Bureaucrat  bob("bob", 150);
        Intern      vova;
        Form *form = vova.makeForm("presidential pardon ", "target ");
        Form *rob = vova.makeForm("robotomy Request form", "Robot");
        Form *shr = vova.makeForm("shrubbery   CREATION  FORM", "Shrubbery");
        form->beSigned(bob);
        rob->beSigned(bob);
        shr->beSigned(bob);
        bob.executeForm(*form);
        bob.executeForm(*rob);
        bob.executeForm(*shr);
        delete (form);
        delete (rob);
        delete (shr);
        //Exception: Form not signed - NO!!!
    }
    catch(std::exception const &e)
    {
        std::cerr << e.what() << '\n';
    }

    // try
    // {
    //     std::cout << "-----------------" << std::endl;
    //     Bureaucrat  bob("bob", 150);
    //     Intern      vova;
    //     Form *form = vova.makeForm("presidential pardon JDKJK ", "target:");
    //     form->beSigned(bob);
    // }
    // catch(std::exception const &e)
    // {
    //     std::cerr << e.what() << '\n';
    //     delete (form);
    // }

	return (0);
}