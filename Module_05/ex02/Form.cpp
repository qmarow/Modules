#include "Form.hpp"

Form::Form(std::string name, \
int _gradeExecute, int _gradeSign): name(name), gradeExecute(_gradeExecute), gradeSign(_gradeSign)
{
	this->signature = false;
	if (this->gradeSign < 1 || this->gradeExecute < 1)
		throw GradeTooLowException();
	if (this->gradeSign > 150 || this->gradeExecute > 150)
		throw GradeTooHighException();
}

Form::Form(Form const &ex): name(ex.name), gradeExecute(ex.gradeExecute), gradeSign(ex.gradeSign)
{
	if (this->gradeSign < 1 || this->gradeExecute < 1)
		throw GradeTooLowException();
	if (this->gradeSign > 150 || this->gradeExecute > 150)
		throw GradeTooHighException();
	*this = ex;
}

Form	&Form::operator=(Form const &ex)
{
	this->signature = ex.signature;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("High Exception");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Low Exception");
}

const char* Form::FormNotSignedException::what() const throw()
{
	return ("Exception: Form not signed");
}

void			Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->gradeExecute)
		throw Form::GradeTooLowException();
	if (!this->signature)
		throw Form::FormNotSignedException();
	std::cout << executor.getName() << "  executes " << this->getName() << std::endl;
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() < this->gradeSign)
		throw Form::GradeTooLowException();
	this->signature = true;
}

std::string		Form::getName() const
{
	return (this->name);
}

int				Form::getGE() const
{
	return (this->gradeExecute);
}

int				Form::getGS() const
{
	return (this->gradeSign);
}

bool			Form::getSig() const
{
	return (this->signature);
}

std::ostream    &operator<<(std::ostream &out, Form &ex)
{
	out << "\t\tInfo form\n" << "Name: " << ex.getName() << "\n" << \
	"Grade execute: " << ex.getGE() << "\n"  << \
	"Grade signature:" << ex.getGS() << "\n" << \
	"Signature: " << ex.getSig() << std::endl;
	return (out);
}

Form::~Form()
{}