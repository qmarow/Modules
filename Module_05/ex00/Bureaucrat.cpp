#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
{
    if (this->grade > 150)
        throw  Bureaucrat::GradeTooHighException();
    else if (this->grade < 1)
        throw  Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &ex): name(ex.name)
{
    if (ex.grade > 150)
        throw  Bureaucrat::GradeTooHighException();
    else if (ex.grade < 1)
        throw  Bureaucrat::GradeTooLowException();
    *this = ex;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &ex)
{
    this->grade = ex.grade;
    return (*this);
}

std::string     Bureaucrat::getName() const
{
    return (this->name);
}

int             Bureaucrat::getGrade() const
{
    return (this->grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("High Exception");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Low Exception");
}

void            Bureaucrat::high()
{
    this->grade++;
    if (this->grade > 150)
        throw  Bureaucrat::GradeTooHighException();
}

void            Bureaucrat::low()
{
    this->grade--;
    if (this->grade < 1)
        throw GradeTooLowException();
}

std::ostream    &operator<<(std::ostream &out, Bureaucrat &ex)
{
    out << ex.getName() << ", bureaucrat grade " << ex.getGrade() << std::endl;
    return (out);
}

Bureaucrat::~Bureaucrat()
{}
