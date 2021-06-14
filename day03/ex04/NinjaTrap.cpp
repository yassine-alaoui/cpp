/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:26:02 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 09:06:07 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const name) : ClapTrap(name)
{
	this->hp = 60;
	this->mhp = 60;
	this->mp = 120;
	this->mmp = 120;
	this->lvl = 1;
	this->mad = 60;
	this->rad = 5;
	this->adr = 0;
	std::cout << "Hey I'm a ninja don't tell nobody" << std::endl;
}

NinjaTrap::NinjaTrap(void)
{
	this->hp = 60;
	this->mhp = 60;
	this->mp = 120;
	this->mmp = 120;
	this->lvl = 1;
	this->mad = 60;
	this->rad = 5;
	this->adr = 0;
	name = "";
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const& val) : ClapTrap(val.name)
{
	std::cout << "Hey I'm a ninja don't tell nobody" << std::endl;
	*this = val;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const& val)
{
	std::cout << "Hey I'm a ninja don't tell nobody" << std::endl;
	this->name = val.name;
	this->hp = val.hp;
	this->mhp = val.mhp;
	this->mp = val.mp;
	this->mmp = val.mmp;
	this->lvl = val.lvl;
	this->mad = val.mad;
	this->rad = val.rad;
	this->adr = val.adr;
	return *this;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->name << " attacks " << target << " at melee, causing " << this->mad << " of damage!" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->name << " attacks " << target << " at range, causing " << this->rad << " of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const& val)
{
	(void)val;
	std::cout << "Is that Daddy's name on the list?" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const& val)
{
	(void)val;
	std::cout << "This ScavTrap got killed with soy sauce and raw beens" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const& val)
{
	(void)val;
	std::cout << "This FragTrap is leaking memory now..." << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const& val)
{
	(void)val;
	std::cout << "Wait what are you doing ??" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Substution jutsu!" << std::endl;
}
