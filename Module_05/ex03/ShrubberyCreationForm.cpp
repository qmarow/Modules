#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form(target + "__shrubbery", 137, 145)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ex): Form(ex)
{
}

void    ShrubberyCreationForm::Action(void) const
{
    std::ofstream		file(this->getName());

	file << "                	 # #### ####			\n" << \
        	"           	     ## \\/#|### |/##		\n" << \
        	"   	           ##\\/#/ \\||/##/_/##		\n" << \
       		"          		 ###  \\/###|/ \\/ # ###	\n" << \
       		"       	   ##_\\_#\\_\\## | #/###_/_####\n" << \
        	"       	  ## #### # \\ #| /  #### ##/##	\n" << \
        	"    	      __#_--###`  |{,###---###-~	\n" << \
        	"                        |||				\n" << \
        	"                        |||				\n" << \
        	"                        |||				\n" << \
        	"                        |||				\n" << \
        	"                  , -=-~{ .-^- _			\n" << \
        	"********************************************";
	file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	this->Action();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
