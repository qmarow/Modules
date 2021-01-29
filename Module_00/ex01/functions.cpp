#include "contact.class.hpp"

Contact::Contact()
{
	this->fields[0] = "Enter your name: ";
	this->fields[1] = "Enter your last name: ";
	this->fields[2] = "Enter your nickname: ";
	this->fields[3] = "Enter your login: ";
	this->fields[4] = "Enter your postal address: ";
	this->fields[5] = "Enter your email address: ";
	this->fields[6] = "Enter your phone number: ";
	this->fields[7] = "Enter your birthday data: ";
	this->fields[8] = "Enter your favorite meal: ";
	this->fields[9] = "Enter your underwear color: ";
	this->fields[10] = "Enter your darkest secret: ";
}

Contact		*Contact::ft_add(Contact *book, int count)
{
	int		i = -1;
	int		a = -1;

	Contact *new_cont = new Contact[count];
	--count;
	while (++a < count)
		new_cont[a] = book[a];
	while (++i < COUNT_FIELDS)
	{
		if (std::cin.eof())
		{
			std::cout << "Don't press these keys";
			exit(0);
		}
		std::cout << new_cont[a].fields[i];
		std::getline(std::cin, new_cont[a].contact[i]);
	}
	return (new_cont);
}

void	print_zone(int count)
{
	int		i = 0;

	count = count * 11 + 1;
	while (++i <= count)
		std::cout << "-";
	std::cout << "\n";
}

void	Contact::print_contacts(Contact *book, int index, int count_print)
{
	int		i;

	i = -1;
	std::cout << "|" << std::setw(10) << index + 1;
	while (++i < count_print)
	{
		if (book[index].contact[i].length() <= 10)
			std::cout << "|" << std::setw(10) << book[index].contact[i];
		else
			std::cout << "|" << book[index].contact[i].substr(0, 9) << ".";
	}
	std::cout << "|" << std::endl;		
}

void	print_headers(int count, int situation)
{
	print_zone(count);
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "Name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname";
	if (situation == 2)
	{
		std::cout << "|" << std::setw(10) << "Login";
		std::cout << "|" << std::setw(10) << "Postal";
		std::cout << "|" << std::setw(10) << "Email";
		std::cout << "|" << std::setw(10) << "Num. phone";
		std::cout << "|" << std::setw(10) << "Birthday";
		std::cout << "|" << std::setw(10) << "Meal";
		std::cout << "|" << std::setw(10) << "Color";
		std::cout << "|" << std::setw(10) << "Secret";
	}
	std::cout << "|" << std::endl;
	print_zone(count);
}

void	ft_search(Contact *book, int count, std::string str)
{
	int		i = 0;

	if (str != "SEARCH")
		i = atoi(str.substr(7).c_str());
	if (i >= 1 && i <= count)
	{
		print_headers(12, 2);
		book->print_contacts(book, i - 1, 11);
		print_zone(12);
	}
	else if (i == 0)
	{
		i = -1;
		print_headers(4, 1);
		while (++i < count)
		{
			book->print_contacts(book, i, 3);
			print_zone(4);
		}
	}
}

Contact::~Contact()
{

}
