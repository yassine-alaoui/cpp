
#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

class Pony
{
	private:
		string	name;
		string	task;
	public:
		Pony(string name, string task);
		~Pony();
		string	get_name();
		string	get_task();
};

#endif