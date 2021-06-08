#include "Human.hpp"

Human::Human()
{
}

string	Human::identify()
{
	std::stringstream stream;

	stream << &this->newBrain;
	return (stream.str());
}

Brain	const &Human::getBrain()
{
	return newBrain;
}