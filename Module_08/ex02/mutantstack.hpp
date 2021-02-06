#ifndef MUTANTSTACK_HPP
#define	MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <set>

template<typename T>
class MutantStack: public std::stack<T>{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const &ex);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin(void);
		iterator end(void);
		~MutantStack();
};

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &ex): std::stack<T>(ex)
{
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

#endif
