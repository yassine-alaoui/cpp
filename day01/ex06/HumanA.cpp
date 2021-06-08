#include "HumanA.hpp"

HumanA::HumanA(string nameA, Weapon &type) : name(nameA), WeaponA(type)
{
	return ;
}

void	HumanA::attack()
{
	cout << name << " attacks with his " << WeaponA.get_type() << endl;
	return ;
}