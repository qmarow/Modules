#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form{
    public:
            PresidentialPardonForm(const std::string target);
            PresidentialPardonForm(PresidentialPardonForm const &ex);
            void	execute(Bureaucrat const &executor) const;
            void 	Action(void) const;
			~PresidentialPardonForm();
};

#endif
