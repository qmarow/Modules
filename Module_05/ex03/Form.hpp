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
			virtual ~Form();
			class GradeTooHighException: public std::exception{
                const char* what() const throw();
			};
            class GradeTooLowException: public std::exception{
                const char* what() const throw();
			};
			class FormNotSignedException: public std::exception{
				const char* what() const throw();
			};
			
			virtual void	execute(Bureaucrat const &executor) const = 0;
			void	beSigned(Bureaucrat &bureaucrat);
			std::string	getName() const;
			int			getGE() const;
			int			getGS() const;
			bool		getSig() const;
};

std::ostream &operator<<(std::ostream &out, Form &ex);

#endif
