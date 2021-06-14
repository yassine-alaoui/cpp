/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:30:10 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 08:49:56 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	
}

ClapTrap::ClapTrap(std::string const name)
{
	this->name = name;
	std::cout << "You are all my kids!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& val)
{
	std::cout << "You are all my kids!" << std::endl;
	*this = val;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const& val)
{
	std::cout << "You are all my kids!" << std::endl;
	this->name = val.name;
	return *this;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hp = ((int)amount - this->adr) > this->hp ? 0 : this->hp - ((int)amount - this->adr);
	std::cout << "Ouuuch ! That looks painful! remaining Hp: " << this->hp << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hp = (this->mhp <= this->hp + (int)amount) ? this->mhp : this->hp + (int)amount;
	std::cout << "Yaaay ! Getting me set up always feels amazing ! remaining Hp: " << this->hp << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "Destroying me will destory everything!" << std::endl;
}