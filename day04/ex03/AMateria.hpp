/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:38:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/21 17:32:32 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	private:
	protected:
		unsigned int _xp;
		std::string	_type;
	public:
		AMateria() {};
		AMateria(std::string const & type);
		AMateria(AMateria const& val);
		AMateria & operator=(AMateria const& val);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
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

#endif