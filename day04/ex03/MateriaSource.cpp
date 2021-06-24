/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:21:04 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:21:26 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	*_materias = NULL;
	_count = 0;
}

MateriaSource::MateriaSource(MateriaSource const& val)
{
	*this = val;
}

MateriaSource & MateriaSource::operator=(MateriaSource const& val)
{
	int i;

	i = 0;
	while (i < 4)
		delete _materias[i];
	i = 0;
	this->_count = val._count;
	while (val._materias[i] && i < 4)
	{
		this->_materias[i] = val._materias[i]->clone();
		i++;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria * val)
{
	if (this->_count > 3)
		return ;
	this->_type = val->getType();
	this->_materias[this->_count] = val;
	this->_count++;
	this->_materias[this->_count] = 0;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	if (this->_count > 3)
		return 0;
	while (i < 3 && this->_materias[i])
	{
		if (this->_materias[i]->getType() == type)
			return this->_materias[i];
		i++;
	}
	return 0;
}

MateriaSource::~MateriaSource()
{
}
