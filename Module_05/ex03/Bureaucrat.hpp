#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat;
#include <iostream>
#include "Form.hpp"

class Bureaucrat {
    private:
            const std::string   name;
            int                 grade;
    public:
            Bureaucrat(std::string _name, int _grade);
            Bureaucrat(Bureaucrat const &ex);
            Bureaucrat  &operator=(Bureaucrat const &ex);
            ~Bureaucrat();

            class GradeTooHighException: public std::exception{
                const char* what() const throw();};
            class GradeTooLowException: public std::exception{
                const char* what() const throw();};
            
            void    executeForm(Form const & form);
            void    signForm(Form &form);
            void    high();
            void    low();
            std::string getName() const;
            int         getGrade() const;
};

std::ostream    &operator<<(std::ostream &out, Bureaucrat &ex);

#endif
