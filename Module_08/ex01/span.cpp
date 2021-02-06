#include "span.hpp"

Span::Span(): count(0), N(0)
{}

Span::Span(size_t _N): count(0), N(_N)
{}

Span::Span(Span const &ex)
{
	*this = ex;
}

Span	&Span::operator=(Span const &ex)
{
	this->array = ex.array;
	this->count = ex.count;
	this->N = ex.N;
	return (*this);
}

const char *Span::NotEnoughSpaceException::what() const throw()
{
	return ("Exception: Not enough space");
}

const char *Span::NotARangeToSearchException::what() const throw()
{
	return ("Exception: Not a range to search");
}


void	Span::addNumber(int number)
{
	if ((size_t)this->count >= this->N)
		throw NotEnoughSpaceException();
	this->count++;
	this->array.insert(number);
}

void	Span::addNumber(std::multiset<int>::iterator begin, std::multiset<int>::iterator end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		this->count++;
		++begin;
	}
}

int		Span::shortestSpan(void)
{
	std::multiset<int>::iterator i;

	i = this->array.begin();
	if (this->count < 2)
		throw NotARangeToSearchException();
	++i;
	return (*i - *(--i));
}

int		Span::longestSpan(void)
{
	std::multiset<int>::iterator i;
	std::multiset<int>::iterator e;

	i = this->array.begin();
	e = this->array.end();
	if (this->count < 2)
		throw NotARangeToSearchException();
	return (*(--e) - *i);
}

std::multiset<int>::iterator Span::getBegin()
{
	return (this->array.begin());
}

std::multiset<int>::iterator Span::getEnd()
{
	return (this->array.end());
}

Span::~Span()
{}