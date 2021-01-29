#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form(target, 5, 25)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ex): Form(ex)
{ 
}

void    PresidentialPardonForm::Action(void) const
{
    std::cout << this->getName() << "has been pardoned by Zafod Beeblebrox\n";
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    this->Action();
}

PresidentialPardonForm::~PresidentialPardonForm()
{}
