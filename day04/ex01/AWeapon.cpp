/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:28:02 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 12:13:13 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"

AWeapon::AWeapon(AWeapon const& val)
{
	*this = val;
	return ;
}

AWeapon & AWeapon::operator=(AWeapon const& val)
{
	this->_ap = val.getAPCost();
	this->_ad = val.getDamage();
	this->_name = val.getName();
	return *this;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_ap = apcost;
	this->_ad = damage;
	return ;
}

std::string AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_ap;
}

int AWeapon::getDamage() const
{
	return this->_ad;
}
