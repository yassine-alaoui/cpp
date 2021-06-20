/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:29:12 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 12:13:59 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PowerFist.hpp"

PowerFist::PowerFist(PowerFist const& val)
{
	*this = val;
	return ;
}


int PowerFist::getAPCost() const
{
	return	_ap;
}

int PowerFist::getDamage() const
{
	return _ad;
}

std::string	PowerFist::getName() const
{
	return _name;
}


PowerFist::PowerFist(void)
{
	this->_name = "Power Fist";
	this->_ap = 8;
	this->_ad = 50;
	return ;
}

PowerFist & PowerFist::operator=(PowerFist const& val)
{
	this->_ap = val.getAPCost();
	this->_ad = val.getDamage();
	this->_name = val.getName();
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}

PowerFist::~PowerFist()
{
}
