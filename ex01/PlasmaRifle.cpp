/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:26:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 12:13:49 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(PlasmaRifle const& val)
{
	*this = val;
	return ;
}

int PlasmaRifle::getAPCost() const
{
	return	_ap;
}

int PlasmaRifle::getDamage() const
{
	return _ad;
}

std::string	PlasmaRifle::getName() const
{
	return _name;
}

PlasmaRifle::PlasmaRifle(void)
{
	this->_name = "Plasma Rifle";
	this->_ap = 5;
	this->_ad = 21;
	return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const& val)
{
	this->_ap = val.getAPCost();
	this->_ad = val.getDamage();
	this->_name = val.getName();
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
}
