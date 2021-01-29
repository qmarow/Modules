#include "Intern.hpp"

Form    *ft_RobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form    *ft_PresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form    *ft_ShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}


int     Intern::comparison(const char *t, const char *s2)
{
    int     i = 0;
    int     a = 0;

    while (t[i] && s2[a])
    {
        if (t[i] == ' ')
            ++i;
        else if (t[i] == s2[a])
        {
            ++a;
            ++i;
        }
        else if (t[i] + 32 == s2[a])
        {
            ++a;
            ++i;
        }
        else
            return (0);
    }
    if (!s2[a] && !t[i])
        return (1);
    return (0);
}

Intern::Intern()
{
    this->mass[0] = "robotomyrequestform";
    this->mass[1] = "presidentialpardonform";
    this->mass[2] = "shrubberycreationform";
}

Intern::Intern(Intern const &ex)
{
    *this = ex;
}

Intern  &Intern::operator=(Intern const)
{
    return (*this);
}

int     Intern::findForm(const char *s)
{
    int     i = -1;
    int     a = 0;

    while (s[++i])
    {
        if ((s[i] == 'f' || s[i] == 'F') && ++i)
        {
            while (s[i] == ' ')
                ++i;
            if ((s[i] == 'o' || s[i] == 'O') && ++i)
                ++a;
            while (s[i] == ' ')
                ++i;
            if ((s[i] == 'r' || s[i] == 'R') && ++i)
                ++a;
            while (s[i] == ' ')
                ++i;
            if ((s[i] == 'm' || s[i] == 'M') && ++i)
                ++a;
            if (a == 3)
                return (1);
        }
    }
    return (0);
}

Form    *Intern::makeForm(std::string nameForm, std::string targetForm)
{
    int     i = -1;

    Form *(*operation[])(std::string) = {ft_RobotomyRequestForm, ft_PresidentialPardonForm, ft_ShrubberyCreationForm};

    if (!this->findForm(nameForm.c_str()))
        nameForm += "form";
    while (++i < 3)
    {
        if (this->comparison(nameForm.c_str(), this->mass[i].c_str()))
        {
            std::cout << "Intern creates " << this->mass[i] << std::endl;
            return (operation[i](targetForm));
        }
    }
    throw Intern::FormNotFoundException();
    return (NULL);
}

Intern::~Intern()
{
}
