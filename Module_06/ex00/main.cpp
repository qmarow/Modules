#include "literalValues.hpp"

std::string	conversionChar(int n, literalValues *literal)
{
	std::stringstream s;

	if (literal->isChar == -1 || literal->haveDot > 1 || literal->isNegative || n < -128 || n > 127)	
		s << ("impossible");		
	else if (n < 32 || n > 126)
		s << ("Non displayable");
	else
		s << static_cast<char>(n);
	return (s.str());
}

std::string conversionInt(int numb, literalValues *literal, std::string str)
{
	std::stringstream	s;
	int					a;

	if (literal->isChar == -1 || literal->haveDot > 1)	
		s << ("impossible");
	else
		s << static_cast<int>(numb);
	if ((a = str.find('.')) > 0)
	{
		if (s.str() != str.erase(a))
			return ("impossible");
	}
	else
	{
		if (s.str() != str && literal->isChar != 1)
			return ("impossible");
	}
	return (s.str());	
}

std::string conversionFloat(double numb, literalValues *literal)
{
	std::stringstream s;

	if (literal->isChar == -1 || literal->haveDot > 1)	
		s << ("impossible");
	else
	{
		
		s << static_cast<float>(numb);
		if ((int)(s.str()).find('.') == -1)
			s << ".0";
		s << "f";
	}
	if ((int)(s.str()).find('+') > 0)
		return ("impossible");
	return (s.str());	
}

std::string conversionDouble(double numb, literalValues *literal)
{
	std::stringstream s;

	if (literal->isChar == -1 || literal->haveDot > 1)	
		return ("impossible");
	else
		s << static_cast<double>(numb);
	if ((int)(s.str()).find('+') > 0)
		return ("impossible");
	if ((int)(s.str()).find('.') == -1)
		s << ".0";
	return (s.str());	
}

int		ft_end(std::string str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return (i - 1);
}

void	print(std::string str)
{
	std::cout << "Char: " << "impossible" << std::endl;
	std::cout << "Int: " << "impossible" << std::endl;
	std::cout << "Float: " << str + "f" << std::endl;
	std::cout << "Double: " << str << std::endl;
}

int		check_words(std::string str, int neg)
{
	if (neg)
		str = "-" + str;
	if (str == "inf" || str == "+inf" || str == "inff" || str == "+inff")
	{
		std::cout << "-------\n";
		print("inf");
		return (1);
	}
	else if (str == "-inf" || str == "-inff")
	{
		print("-inf");
		return (1);
	}
	else if (str == "nan" || str == "nanf")
	{
		print("nan");
		return (1);
	}
	return (0);
}

void	casts(std::string str, literalValues *literal)
{
	double	numb = 0;
	int		intNum = 0;
	
	if (check_words(str, literal->isNegative))
		return ;
	getNumber(str, literal);
	if (literal->haveF)
		str.erase(ft_end(str));
	if (literal->haveDot <= 1 && !literal->isChar)
	{
		numb = atof(str.c_str());
		intNum = atoi(str.c_str());
	}
	else if (literal->isChar == 1)
	{
		numb = static_cast<char>(str[0]);
		intNum = static_cast<char>(str[0]);
	}
	if (literal->isNegative)
	{
		numb *= -1;
		intNum *= -1;
		str = "-" + str;
	}
	std::cout << "Char: " << conversionChar(intNum, literal) << std::endl;
	std::cout << "Int: " << conversionInt(intNum, literal, str) << std::endl;
	std::cout << "Float: " << conversionFloat(numb, literal) << std::endl;
	std::cout << "Double: " << conversionDouble(numb, literal) << std::endl;
}

int		main(int argc, char **argv)
{
	literalValues literal;

	literal.isChar = 0;
	literal.haveDot = 0;
	literal.isNegative = 0;
	literal.haveF = 0;

	if (argc != 2)
		std::cout << "Неверное кол-во аргументов!";
	else
	{
		if (argv[1][0] && argv[1][0] == '-' && argv[1][1])
		{
			++argv[1];
			literal.isNegative = 1;
		}
		casts(std::string(argv[1]), &literal);
	}
}
