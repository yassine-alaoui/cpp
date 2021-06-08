#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

class Zombie
{
	private:
		string name;
		string type;
	public:
		void	announce(Zombie newZombie);
		// Setters
		void	set_name(string value);
		void	set_type(string value);

		// Getters
		string	get_name();
		string	get_type();

};

#endif