#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony;

	delete(pony);
}

void	ponyOnTheStack(void)
{
	Pony pony;
}

int		main(void)
{
	std::cout << "Pony heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Pony stack" << std::endl;
	ponyOnTheStack();

	return (0);
}