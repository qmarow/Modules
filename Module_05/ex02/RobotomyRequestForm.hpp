#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form{
    public:
			RobotomyRequestForm(const std::string target);
			RobotomyRequestForm(RobotomyRequestForm const &ex);
			void	execute(Bureaucrat const &executor) const;
			void	Action(void) const;
			~RobotomyRequestForm();
};

#endif 
