#include "Serialization.hpp"

int     main(void)
{
    srand(time(NULL));
    Data *mass = deserialize(serialize());
    
    std::cout << mass->s1 << std::endl;
    std::cout << mass->n << std::endl;
    std::cout << mass->s2 << std::endl;
}