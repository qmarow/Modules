#include "Array.hpp"

int		main(void)
{
	try
	{
		Array<double> in;
		Array<char> ch(10);
		Array<double> d(15);

	    Array<int> *a = new Array<int>();
   		std::cout << a << std::endl;



		for (int i = 0; i < ch.size(); i++)
			ch[i] = i + '0';
		for (int i = 0; i < d.size(); i++)
			d[i] = (double)i + ((double)i / 10);
		
		in = d;

		std::cout << "result in: ";
		for (int i = 0; i < in.size(); i++)
			std::cout << in[i] << " ";
		std::cout  << std::endl;

		std::cout << "\nresult ch: ";
		for (int i = 0; i < ch.size(); i++)
			std::cout << ch[i] << " ";
		std::cout << std::endl;

		std::cout << "\nresult d: ";
		for (int i = 0; i < d.size(); i++)
			std::cout << d[i] << " ";

		std::cout << "\n---------------------------" << std::endl;
		ch[15];
		std::cout << "\n---------------------------" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}