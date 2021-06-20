/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:20:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/20 11:16:39 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include "TacticalMarine.hpp"
# define MARINE_SIZE 4096

class Container
{
	public:
		ISpaceMarine	*marine;
		Container		*next;
};

class Squad : public ISquad
{
	private:
		int				count;
		Container		*contain;
		//ISpaceMarine	*marines[MARINE_SIZE];
	public:
		Squad();
		Squad(Squad const& val);
		Squad & operator=(Squad const& val);
		int getCount() const;
		ISpaceMarine* getUnit(int num) const;
		int push(ISpaceMarine* val);
		~Squad();
};

Squad::Squad()
{
	count = 0;
	contain = 0;
}

Squad::Squad(Squad const& val)
{
	*this = val;
}

Squad & Squad::operator=(Squad const& val)
{
	Container	*copy;
	Container	*tmp;
	Container	*forval;

	copy = contain;
	while (copy)
	{
		tmp = copy;
		delete copy->marine;
		copy = copy->next;
		delete tmp;
	}
	this->count = val.count;
	forval = val.contain;
	while (forval)
	{
		for (int i =0; i <= val.getCount();i++)
		{
			this->push(forval->marine->clone());
			forval = forval->next;
		}
	}
	return *this;
}

int Squad::push(ISpaceMarine* val)
{
	if (!val)
		return count;

	Container *theNew = new Container;
	theNew->marine = val;
	theNew->next = NULL;

	if (this->contain == NULL)
	{
		this->contain = theNew;
		this->count++;
		return count;
	}
	Container *tmp = this->contain;
	while (tmp->next)
	{
		if (tmp && tmp->marine == val)
			return count;
		tmp = tmp->next;
	}
	tmp->next = theNew;
	this->count++;
	return count;
}

ISpaceMarine* Squad::getUnit(int num) const
{
	if (!this->contain)
		return 0;
	Container *tmp = this->contain;
	for (int i = 0; i < this->count && tmp; i++)
	{
		if (i == num)
			return tmp->marine;
		tmp = tmp->next;
	}
	return (NULL);
}

int Squad::getCount() const
{
	return count;
}

Squad::~Squad()
{
	Container	*copy;
	Container	*tmp;

	copy = contain;
	while (copy)
	{
		tmp = copy;
		delete copy->marine;
		copy = copy->next;
		delete tmp;
	}
}


#endif