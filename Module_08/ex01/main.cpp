#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "---------1---------" << std::endl;
	try
	{
		sp.addNumber(1);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n'; 
	}
	std::cout << "---------2---------" << std::endl;
	try
	{
		Span mySpan(10);
		Span addSpan(10000);
		for (int i = 1; i <= 10; i++)
			mySpan.addNumber(i);
		// std::multiset<int>::iterator a = mySpan.getBegin();
		// std::multiset<int>::iterator b = mySpan.getEnd();
		// while (a != b)
		// {
		// 	std::cout << "a - " << *a << std::endl;
		// 	++a;
		// }

		addSpan.addNumber(mySpan.getBegin(), mySpan.getEnd());
		addSpan.addNumber(mySpan.getBegin(), mySpan.getEnd());

		std::cout << addSpan.shortestSpan() << std::endl;
		std::cout << addSpan.longestSpan() << std::endl;

		// std::multiset<int>::iterator beg = addSpan.getBegin();
		// std::multiset<int>::iterator end = addSpan.getEnd();
		// while (beg != end)
		// {
		// 	std::cout << "beg - " << *beg << std::endl;
		// 	++beg;
		// }
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------3---------" << std::endl;
	try
	{
		Span sp(29);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;	
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}