#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"
# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

class HumanA
{
	private:
		string	name;
		Weapon	&WeaponA;
	public:
		HumanA(string nameA, Weapon &type);
		void	attack();
};

#endif