#ifndef LITERALVALUES_HPP
# define LITERALVALUES_HPP


#include <iostream>
#include <sstream>

struct literalValues
{
    int     isChar;
    int     haveF;
    int     isNegative;
    int     haveDot;
};

int		ft_isdigit(char c);
int		ft_end(std::string str);
void	getNumber(std::string str, literalValues *literal);
double  ft_atoi(std::string str, literalValues *literal);

#endif
