/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:18:29 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:19:52 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(/* args */) : AMateria("cure")
{
}

Cure::Cure(Cure const& val) : AMateria(val._type)
{
	*this = val;
}

Cure & Cure::operator=(Cure const& val)
{
	(void)val;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *\n";
	AMateria::set_xp();
	std::cout << "Current experience of cure " << AMateria::_xp << "\n";
}

Cure::~Cure()
{
}
