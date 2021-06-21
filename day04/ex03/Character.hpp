/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:20:49 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/21 17:31:20 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria		*_materias[4];
		std::string		_name;
		unsigned int	_count;
		Character(/* args */) {};
	public:
		Character(Character const& val);
		Character(std::string const name);
		Character & operator=(Character const& val);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		~Character();
};

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


#endif