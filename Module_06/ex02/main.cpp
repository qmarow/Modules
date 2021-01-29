#include "Base.hpp"

int     main(void)
{
    Base *p = generate();
    identify_from_pointer(p);
    identify_from_reference(*p);
    std::cout << std::endl;

    Base *a = new A;
    identify_from_pointer(a);
    identify_from_reference(*a);
    std::cout << std::endl;

    Base *b = new B;
    identify_from_pointer(b);
    identify_from_reference(*b);
    std::cout << std::endl;
    
    Base *c = new C;
    identify_from_pointer(c);
    identify_from_reference(*c);
}
