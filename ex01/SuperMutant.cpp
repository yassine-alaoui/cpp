/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:25:46 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 11:26:14 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
	this->_hp = 170;
	this->_type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const& val)
{
	*this = val;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant & SuperMutant::operator=(SuperMutant const& val)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->_hp = val.getHP();
	this->_type = val.getType();
	return *this;
}

void	SuperMutant::takeDamage(int val)
{
	val -= 3;
	Enemy::takeDamage(val);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}
