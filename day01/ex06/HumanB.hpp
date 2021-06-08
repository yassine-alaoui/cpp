#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"
# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

class HumanB
{
	private:
		string	name;
		Weapon	*WeaponB;
	public:
		HumanB(string nameA);
		~HumanB();
		void	setWeapon(Weapon &value);
		void	attack();
};

#endif