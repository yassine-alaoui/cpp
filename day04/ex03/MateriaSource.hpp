/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:49:50 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/21 17:11:45 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*_materias[4];
		unsigned int	_count;
		std::string		_type;
	public:
		MateriaSource(/* args */);
		MateriaSource(MateriaSource const& val);
		MateriaSource & operator=(MateriaSource const& val);
		void learnMateria(AMateria * val);
		AMateria* createMateria(std::string const & type);
		~MateriaSource();
};

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
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	if (this->_count > 3)
		return 0;
	while (i < 3 || i < (int)this->_count)
	{
		if (this->_type == type)
			return this->_materias[i];
		i++;
	}
	return 0;
}

MateriaSource::~MateriaSource()
{
}


#endif