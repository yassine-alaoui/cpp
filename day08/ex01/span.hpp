#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<int> mylist;
		unsigned int _N;
		unsigned int _I;
		Span() {};
	public:
		class Error : public std::exception
		{
			virtual const char *what() const throw();
		};
		Span(unsigned int N);
		Span(Span const& val);
		Span &	operator=(Span const& val);
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		~Span();
};

#endif
