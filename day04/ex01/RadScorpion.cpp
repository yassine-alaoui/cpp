/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:29:53 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 10:28:22 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
{
	this->_hp = 80;
	this->_type = "RadScorpion";
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const& val)
{
	*this = val;
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion & RadScorpion::operator=(RadScorpion const& val)
{
	std::cout << "* click click click *" << std::endl;
	this->_hp = val.getHP();
	this->_type = val.getType();
	return *this;
}

void	RadScorpion::takeDamage(int val)
{
	Enemy::takeDamage(val);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
