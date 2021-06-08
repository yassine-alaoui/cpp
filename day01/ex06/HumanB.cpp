#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &value)
{
	WeaponB = &value;
	return ;
}

HumanB::HumanB(string nameA) : name(nameA)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack()
{
	cout << name << " attacks with his " << WeaponB->get_type() << endl;
}