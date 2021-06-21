/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:36:19 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 11:40:56 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Peon.hpp"

Peon::Peon(Peon const& val) : Victim(val._name)
{
	*this = val;
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon &Peon::operator=(Peon const& val)
{
	_name = val.getName();
	std::cout << "Zog zog." << std::endl;
	return *this;
}

Peon::Peon(std::string name) : Victim(name), _name(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
	return ;
}

std::ostream	&operator << (std::ostream &output, Peon const& val)
{
	output << "I'm " << val.getName() << " and I like otters!" << std::endl;
	return output;
}

std::string	Peon::getName(void) const
{
	return _name;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}
