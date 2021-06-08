#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iostream>
# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

class Weapon
{
	private:
		string type;
	public:
		Weapon(string value);
		void	setType(string value);
		string	&get_type();
};

#endif