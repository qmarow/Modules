#include <iostream>
#include <fstream>
#include <sstream>

int			myFind(std::string s, std::string s1, int *i)
{
	int a = 0;

	while (*i < (int)s.length())
	{
		if (s[*i] == s1[a])
		{
			while (s[*i + a] && s1[a] && s[*i + a] == s1[a])
			{
				++a;
				if (!s1[a])
					return (*i);
			}
			*i += a - 1;
			a = 0;
		}
		++(*i);
	}
	return (-1);
}

std::string strnewstr(std::string s, std::string s1, std::string s2)
{
	int	i = 0;
	
	while ((i = myFind(s, s1, &i)) != -1)
	{
		s.replace(i, s1.length(), s2);
		i += s2.length();
	}
	return (s);
}

std::string	readfile(char **argv, int *flag)
{
	std::stringstream	str;
	std::ifstream		file(argv[1]);
	std::string			tmp_s;

	if (!file.is_open() && (*flag = 1))
		return ("");
	getline(file, tmp_s, '\0');
	tmp_s = strnewstr(tmp_s, std::string(argv[2]), std::string(argv[3]));
	str << tmp_s;
	return (str.str());
}

char	*megaphone(char *str, int a)
{
	int		i;

	i = -1;
	while (str[++i] && i != a)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

std::string	getname(char *name)
{
	int		i;
	int		a;
	std::string	newname;

	a = 0;
	i = -1;
	while (name[++i])
		if (name[i] == '.')
			a = i;
	name = megaphone((char *)name, a);
	newname = std::string(name).substr(0, a);
	newname += ".replace";
	return (newname);
}

void		writenewfile(std::string upfile, char *name)
{
	std::ofstream	file(getname(name));

	file << upfile;
}

int			main(int argc, char **argv)
{
	std::string			upfile;
	int					flag;

	flag = 0;
	if (argc == 4)
	{
		upfile = readfile(argv, &flag);
		if (flag)
			return (0);
		writenewfile(upfile, argv[1]);
	}
	return (0);
}