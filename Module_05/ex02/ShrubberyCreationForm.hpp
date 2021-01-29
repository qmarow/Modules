#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"
#include "sstream"

class ShrubberyCreationForm: public Form{
    public:
            ShrubberyCreationForm(const std::string target);
            ShrubberyCreationForm(ShrubberyCreationForm const &ex);
            void	execute(Bureaucrat const &executor) const;
            void    Action(void) const;
            ~ShrubberyCreationForm();
};

#endif
