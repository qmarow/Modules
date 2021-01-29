#include "ZombieHorde.hpp"

int		get_n()
{
	std::string		n;

	while (1)
	{
		std::cout << "Введи кол-во зомби: ";
		std::cin >> n;
		if (atoi(n.c_str()) <= 0)
			std::cout << "Вы ввели некорректное кол-во мертвецов. Попробуй ввести цифру начаниая с 1." \
			<< std::endl;
		else 
			break ;
	}
	return (atoi(n.c_str()));
}

int		main(void)
{
	ZombieHorde		a(get_n());	
	a.announce();
}