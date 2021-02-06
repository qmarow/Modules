#include "easyfind.hpp"
#include <vector>


int     main()
{
    std::vector<int>  ivect;
    for (int i = 0; i < 10; i++)
        ivect.push_back(i);
    
    std::vector<char> chvect;
    for (int i = 0; i < 15; i++)
       chvect.push_back((i + '0'));
    try
    {
        std::cout << easyfind(ivect, 1) << std::endl;
        std::cout << (char)easyfind(chvect, '5') << std::endl;
        std::cout << easyfind(ivect, 10) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
