/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:15:29 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:15:51 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

void	AMateria::set_xp()
{
	this->_xp += 10;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria::AMateria(AMateria const& val)
{
	*this = val;
}

AMateria & AMateria::operator=(AMateria const& val)
{
	this->_type = val._type;
	this->_xp = val._xp;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

AMateria::~AMateria()
{
}