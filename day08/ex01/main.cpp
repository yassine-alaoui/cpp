#include "span.hpp"

int main()
{
	Span sp = Span(6);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(4);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << " ------ " << std::endl;
	Span tp = Span(3);
	int	*ptr = new int(3);
	ptr[0] = 1;
	ptr[1] = 2;
	ptr[2] = 10;
	tp.addNumber_p(ptr);
	std::cout << tp.shortestSpan() << std::endl;
	std::cout << tp.longestSpan() << std::endl;
}