/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:16:33 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:17:51 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Character.hpp"

Character::Character(std::string const name)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
	this->_count = 0;
	this->_name = name;
}

Character::Character(Character const& val)
{
	*this = val;
}

Character & Character::operator=(Character const& val)
{
	int i;

	i = 0;
	while (i < 4)
	{
		delete _materias[i];
		i++;
	}
	i = 0;
	this->_name = val._name;
	this->_count = val._count;
	while (val._materias[i] && i < 4)
	{
		this->_materias[i] = val._materias[i]->clone();
		i++;
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (this->_count > 3)
		return ;
	this->_materias[this->_count] = m;
	this->_count++;
}

void Character::unequip(int idx)
{
	if (this->_count > 3 || idx > 3)
		return ;
	this->_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_count > 3 || idx > 3)
		return ;
	this->_materias[idx]->use(target);
}

Character::~Character()
{
	int i;

	i = 0;
	while (i < 4)
	{
		delete _materias[i];
		i++;
	}
}
