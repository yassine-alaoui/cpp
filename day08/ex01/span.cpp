#include "span.hpp"

const char *Span::Error::what() const throw()
{
	return "Imposssible option";
}

int		Span::shortestSpan()
{
	if (this->_N <= 1)
		throw Error();
	int 			mini;
	int 			mini1;
	unsigned int 	i = 1;

	sort(this->mylist.begin(), this->mylist.end());
	mini = this->mylist[1] - this->mylist[0];
	while ((i + 1) < this->_N)
	{
		mini1 = this->mylist[i + 1] - this->mylist[i];
		if (mini1 < mini)
			mini = mini1;
		i++;
	}
	return mini;
}

int		Span::longestSpan()
{
	if (this->_N <= 1)
		throw Error();
	sort(this->mylist.begin(), this->mylist.end());
	return (this->mylist.back() - this->mylist.front());
}

Span::Span(Span const& val)
{
	*this = val;
}

Span & Span::operator=(Span const& val)
{
	this->_N = val._N;
	return *this;
}

Span::Span(unsigned int N)
{
	this->_I = 0;
	this->_N = N;
}

void	Span::addNumber(int num)
{
	if (this->_I >= this->_N)
		throw Error();
	this->mylist.push_back(num);
	this->_I++;
}

Span::~Span()
{
}