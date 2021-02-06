#include "iter.hpp"

class Awesome
{
public:
    Awesome (void): _n (42) {return; }
    int get (void) const {return this -> _n; }

private:
    int _n;
};

std :: ostream & operator << (std :: ostream & o, Awesome const & rhs)
{
    o << rhs.get(); return o; 
}

int     main(void)
{
    char chMass[20] = "12345678901234";
    int iMass[10] = {1, 2, 3, 4};
    double sMass[] = {1.0, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.6};

    std::cout << "\t\tType char" << std::endl;
    iter(chMass, 10, println);

    std::cout << "\t\tType int" << std::endl;
    iter(iMass, 4, println);

    std::cout << "\t\tType double" << std::endl;
    iter(sMass, 8, println);

    std::cout << "\t\tCheck-List" <<  std::endl;

    int tab [] = {0, 1, 2, 3, 4}; // <--- I still don't understand why you can't write int [] tab. Wouldn't that make more sense?
    Awesome tab2 [5];

    iter (tab, 5, println);
    iter (tab2, 5, println);
}