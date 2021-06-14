/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:37:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/12 18:33:22 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const name) : ClapTrap(name), FragTrap(name), NinjaTrap(name), name(name)
{
	this->hp = FragTrap::hp;
	this->mhp = FragTrap::mhp;
	this->mp = NinjaTrap::mp;
	this->mmp = NinjaTrap::mmp;
	this->lvl = 1;
	this->mad = NinjaTrap::mad;
	this->rad = FragTrap::rad;
	this->adr = FragTrap::adr;
	std::cout << "An absolute flawless program just got initialized" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& val)
{
	*this = val;
	std::cout << "An absolute flawless program just got initialized" << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const& val)
{
	this->name = val.name;
	this->hp = val.hp;
	this->mhp = val.mhp;
	this->mp = val.mp;
	this->mmp = val.mmp;
	this->lvl = val.lvl;
	this->mad = val.mad;
	this->rad = val.rad;
	this->adr = val.adr;
	std::cout << "An absolute flawless program just got initialized" << std::endl;
	return *this;
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destroying me won't make you the main" << std::endl;
}