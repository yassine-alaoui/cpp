# include "easyfind.hpp"

int main()
{
	std::list<int> container;

	container.push_back(42);
	container.push_back(1337);
	container.push_back(19);
	container.push_back(500);
	try
	{
		std::list<int>::iterator thenum = easyfind(container, 1337);
		std::cout << *thenum << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Not found!" << '\n';
	}
}