/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:37:01 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 11:40:37 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"

Sorcerer::Sorcerer(Sorcerer const& val)
{
	*this = val;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return ;
}

Sorcerer &Sorcerer::operator=(Sorcerer const& val)
{
	_name = val.getName();
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return *this;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return ;
}

std::ostream	&operator << (std::ostream &output, Sorcerer const& val)
{
	output << "I am " << val.getName() << ", " << val.getTitle() << ", and I like ponies!" << std::endl;
	return output;
}

void Sorcerer::polymorph(Victim const &val) const
{
	val.getPolymorphed();
	return ;
}

std::string	Sorcerer::getName(void) const
{
	return _name;
}

std::string	Sorcerer::getTitle(void) const
{
	return _title;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}