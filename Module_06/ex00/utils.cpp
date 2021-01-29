#include "literalValues.hpp"

int		ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c == '.')
		return (2);
	return (0);
}

void	getNumber(std::string str, literalValues *literal)
{
	if ((literal->isNegative) || str[1] || ft_isdigit(str[0]))
	{
		if (str[ft_end(str)] == 'f')
		{
			literal->haveF = 1;
			str.erase(ft_end(str));
		}
		for (int i = 0; i < (int)str.length(); i++)
		{
			if (!ft_isdigit(str[i]))
				literal->isChar = -1;
			else if (ft_isdigit(str[i]) == 2)
				literal->haveDot += 1;
			if (literal->haveDot == 2 || literal->isChar == -1)
				return ;
		}
	}
	else
		literal->isChar = 1;	
}
