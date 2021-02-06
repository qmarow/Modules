#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>
#include <vector>


class Span{
    private:
        std::multiset<int> array;
		int		count;
        size_t	N;
    public:
        Span();
        Span(size_t N);
		Span(Span const &ex);
		Span	&operator=(Span const &ex);
        void    addNumber(int);
		void    addNumber(std::multiset<int>::iterator begin, std::multiset<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);
        ~Span();

		std::multiset<int>::iterator getBegin();
		std::multiset<int>::iterator getEnd();
		class NotEnoughSpaceException: public std::exception{
			const char *what() const throw ();
		};

		class NotARangeToSearchException: public std::exception{
			const char *what() const throw();
		};
};

#endif
