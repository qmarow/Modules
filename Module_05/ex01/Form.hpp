#ifndef FORM_HPP
# define FORM_HPP

class Form;
#include <iostream>
#include "Bureaucrat.hpp"

class Form{
    private:
            const std::string   name;
            bool                signature;
            const int           gradeExecute;
            const int           gradeSign;
	public:
			Form(std::string name, int _gradeExecute, int _gradeSign);
			Form(Form const &ex);
			Form &operator=(Form const &ex);
			~Form();
			class GradeTooHighException: public std::exception{
                const char* what() const throw();};
            class GradeTooLowException: public std::exception{
                const char* what() const throw();};
			void	beSigned(Bureaucrat &bureaucrat);
			std::string	getName();
			int			getGE();
			int			getGS();
			bool		getSig();
};

std::ostream &operator<<(std::ostream &out, Form &ex);

#endif
