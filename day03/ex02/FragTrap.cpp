/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:01:07 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 08:49:49 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	this->hp = 100;
	this->mhp = 100;
	this->mp = 100;
	this->mmp = 100;
	this->lvl = 1;
	this->mad = 30;
	this->rad = 20;
	this->adr = 5;
	std::cout << "I think I just had an oily dream!" << std::endl;
}

FragTrap::FragTrap(FragTrap const& val) : ClapTrap(val.name)
{
	this->hp = 100;
	this->mhp = 100;
	this->mp = 100;
	this->mmp = 100;
	this->lvl = 1;
	this->mad = 30;
	this->rad = 20;
	this->adr = 5;
	std::cout << "I think I just had an oily dream!" << std::endl;
	*this = val;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const& val)
{
	std::cout << "I think I just had an oily dream!" << std::endl;
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

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " hits " <<
		target << " at melee, causing " << this->mad << " of damage! Remaing Energy: " << this->mp << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " hits " <<
		target << " at range, causing " << this->rad << " of damage! Remaing Energy: " << this->mp << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->mp <= 0)
	{
		std::cout << "No mana" << std::endl;
		return ;
	}
	this->mp = this->mp < 25 ? 0 : this->mp - 25;
	std::string	random[6] = {"Fish slapp on the head!", "Butt clap on the head!", "Heap overflow on the hip", "Wet kiss on the batteries", "Nut strike"};
	srand (time(NULL));
	int	randn = rand() % 4 + 1;
	std::cout << random[randn] << std::endl;
	randn = rand() % 2 + 1;
	if (randn == 1)
		this->rangedAttack(target);
	else
		this->meleeAttack(target);
}

FragTrap::~FragTrap()
{
	std::cout << "Destroying me won't save you from us ..." << std::endl;
}