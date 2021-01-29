#include "contact.class.hpp"

Contact	*pars_input(std::string str, Contact *book, int *count_cont, int *count_com)
{
	if (str == "ADD" && ++(*count_cont))
	{
		std::cout << "<-+-+-+-+-+-+-+-+-+-+Addition+-+-+-+-+-+-+-+-+-+->" << std::endl;
		book = book->ft_add(book, *count_cont);
		std::cout << "<-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+->" << std::endl;
		*count_com = 3;
	}
	else if (str.substr(0, 6) == "SEARCH")
	{
		*count_com = 3;
		ft_search(book, *count_cont, str);
	}
	else if (str == "EXIT")
		exit(0);
	else
	{
		*count_com = 1;
		return (book);
	}
	if (*count_com != 3)
		*count_com = 0;
	return (book);
}

int     main(void)
{
	Contact *book = new Contact[1];
	std::string str;
	int			count_cont;
	int			count_com;

	count_cont = 0;
	count_com = 0;
	std::cout << "︻╦̵̵╤── ";
    while (1)
    {
		if (std::cin.eof())
		{
			std::cout << "\nНе делай так больше!";
			exit(0);
		}
		if (count_com)
			std::cout << "︻╦̵̵╤── ";
		std::getline(std::cin, str);
		book = pars_input(str, book, &count_cont, &count_com);
    }
}