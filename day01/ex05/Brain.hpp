#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

class Brain
{
	private:
		string		address;
		int			acids;
		int			antioxidants;
		int			vitamins;
	public:
		Brain();
		~Brain();
		string identify() const;
};

# endif