#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form(target, 42, 72)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ex): Form(ex)
{
}

void	RobotomyRequestForm::Action(void) const
{
	srand(time(NULL));
	std::cout << "Brrrrrr Brrrr brrr brr brrrr brr bbrrrr \n";
	if (rand() % 2 == 1)
		std::cout << "Successfully! He robotomized\n";
	else
		std::cout << "Failure... There has been a breakdown\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	this->Action();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
