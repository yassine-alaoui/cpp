#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"
# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

class Human
{
	private:
		Brain const newBrain;
	public:
		Human();
		string	identify();
		Brain	const &getBrain();
};

#endif