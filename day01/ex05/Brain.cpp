# include "Brain.hpp"

string	Brain::identify() const
{
	std::stringstream stream;

	stream << std::hex << this;
	return (stream.str());
}

Brain::Brain()
{
	acids = 22, antioxidants = 10, vitamins = 15;
	return ;
}

Brain::~Brain()
{
	return ;
}