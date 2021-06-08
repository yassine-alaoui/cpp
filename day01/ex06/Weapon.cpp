#include "Weapon.hpp"

Weapon::Weapon(string value) : type(value)
{
	return ;
}

void	Weapon::setType(string value)
{
	type = value;
	return ;
}

string	&Weapon::get_type()
{
	return (type);
}