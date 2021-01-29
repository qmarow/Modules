#include "Base.hpp"

Base    *generate(void)
{
    srand(time(NULL));
    int r = rand() % 3;
    Base    *a;

    if (!r)
        a = new A;
    else if (r == 1)
        a = new B;
    else
        a = new C;
    return (a);
}

void	identify_from_pointer(Base * p)
{
	A *a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	A *a = dynamic_cast<A*>(&p);
	if (a)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B*>(&p);
	if (b)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C*>(&p);
	if (c)
		std::cout << "C" << std::endl;
}
