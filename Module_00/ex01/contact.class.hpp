#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# define COUNT_FIELDS 11
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Contact{
	private:
			std::string fields [COUNT_FIELDS];
			std::string contact[COUNT_FIELDS];

	public:
			Contact();
			void		print_contacts(Contact *book, int index, int count_print);
			Contact		*ft_add(Contact *book, int count);
			~Contact();
};

void		ft_search(Contact *book, int count, std::string str);

#endif