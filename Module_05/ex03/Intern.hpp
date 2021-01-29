#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
    private:
            std::string mass[3];
    public:
            Intern();
            Intern(Intern const &ex);
            Intern  &operator=(Intern const);
            ~Intern();
            class FormNotFoundException: public std::exception{
                const char* what() const throw() {return("Exception: Form not found");};
            };
            int     comparison(const char *s1, const char *s2);
            int     findForm(const char *s);
            Form    *makeForm(std::string nameForm, std::string targetForm);
};

#endif
