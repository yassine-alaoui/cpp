/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:01:07 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/12 11:01:24 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string const name) : hp(100), mhp(100), mp(100), mmp(100), lvl(1), name(name), mad(30), rad(20), adr(5)
{
	std::cout << "I think I just had an oily dream!" << std::endl;
}

FragTrap::FragTrap(FragTrap const& val)
{
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
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->mad << " of damage!" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->rad << " of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->hp = ((int)amount - this->adr) > this->hp ? 0 : this->hp - ((int)amount - this->adr);
	std::cout << "Ouuuch ! That looks painful!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->hp = (this->mhp <= this->hp + (int)amount) ? this->mhp : this->hp + (int)amount;
	std::cout << "Yaaay ! Getting me set up always feels amazing !" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	this->mp = this->mp < 25 ? 0 : this->mp - 25;
	if (this->mp <= 0)
	{
		std::cout << "No mana" << std::endl;
		return ;
	}
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