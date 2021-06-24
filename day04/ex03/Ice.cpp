/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:20:11 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:20:28 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice(/* args */) : AMateria("ice")
{
}

Ice::Ice(Ice const& val) : AMateria(val._type)
{
	*this = val;
}

Ice & Ice::operator=(Ice const& val)
{
	(void)val;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	AMateria::set_xp();
	std::cout << "Current experience of ice " << AMateria::_xp << "\n";
}

Ice::~Ice()
{
}
