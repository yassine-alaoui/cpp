/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Btata.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:26:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 12:13:49 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Btata.hpp"

Btata::Btata(Btata const& val)
{
	*this = val;
	return ;
}

int Btata::getAPCost() const
{
	return	_ap;
}

int Btata::getDamage() const
{
	return _ad;
}

std::string	Btata::getName() const
{
	return _name;
}

Btata::Btata(void)
{
	this->_name = "Btata";
	this->_ap = 1;
	this->_ad = 5;
	return ;
}

Btata & Btata::operator=(Btata const& val)
{
	this->_ap = val.getAPCost();
	this->_ad = val.getDamage();
	this->_name = val.getName();
	return *this;
}

void Btata::attack() const
{
	std::cout << "* Bet bett bettt *" << std::endl;
	return ;
}

Btata::~Btata()
{
}
