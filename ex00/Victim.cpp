/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:37:48 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 11:39:52 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Victim.hpp"

Victim::Victim(Victim const& val)
{
	*this = val;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return ;
}

Victim &Victim::operator=(Victim const& val)
{
	_name = val.getName();
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return *this;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return ;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::ostream	&operator << (std::ostream &output, Victim const& val)
{
	output << "I'm " << val.getName() << " and I like otters!" << std::endl;
	return output;
}

std::string	Victim::getName(void) const
{
	return _name;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
	return ;
}