#include <iostream>

char	*megaphone(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

int     main(int argc, char **argv)
{
	int		i;

	i = 3;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (--argc && ++argv)
			std::cout << megaphone(*argv);
	std::cout << std::endl;
	return (0);
}