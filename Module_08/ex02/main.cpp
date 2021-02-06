#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "--------------------" << std::endl;

	MutantStack<char> chstack;
	chstack.push('a');
	chstack.push('b');
	chstack.push('c');
	chstack.push('d');
	chstack.push('e');
	chstack.push('f');

	std::cout << "size - " << chstack.size() << std::endl;
	chstack.pop();
	std::cout << "size - " << chstack.size() << std::endl;

	{
		MutantStack<char>::iterator begin = chstack.begin();
		MutantStack<char>::iterator end = chstack.end();

		while (begin != end)
		{
			std::cout << *begin << std::endl;
			++begin;
		}
	}
	std::cout << "---------------" << std::endl;

	for (int i = 1; i < 10; i++)
	{
		chstack.push('e' + i);
	}

	{
		MutantStack<char>::iterator begin = chstack.begin();
		MutantStack<char>::iterator end = chstack.end();

		while (begin != end)
		{
			std::cout << *begin << std::endl;
			++begin;
		}
	}

}