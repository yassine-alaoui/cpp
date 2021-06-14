/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:00:09 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/12 11:00:32 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string const name) : hp(100), mhp(100), mp(50), mmp(50), lvl(1), name(name), mad(20), rad(15), adr(3)
{
	std::cout << "You think you can order me... I'll be the main not you!!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& val)
{
	std::cout << "You think you can order me... I'll be the main not you!!" << std::endl;
	*this = val;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const& val)
{
	std::cout << "You think you can order me... I'll be the main not you!!" << std::endl;
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

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at melee, causing " << this->mad << " of damage!" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at range, causing " << this->rad << " of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->hp = ((int)amount - this->adr) > this->hp ? 0 : this->hp - ((int)amount - this->adr);
	std::cout << "Ouuuch ! Stopp iitt.." << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->hp = (this->mhp <= this->hp + (int)amount) ? this->mhp : this->hp + (int)amount;
	std::cout << "Yess!yess!yess. Give me mooore!" << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	std::string	random[6] = {"Push and pull without committing", "Allocate more than I can handle", "Beat me in a blindfold drawing challenge", "Guess this song Never gonna give you up ..."};
	srand (time(NULL));
	int	randn = rand() % 3 + 1;
	std::cout << random[randn] << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destroying me won't make you the main" << std::endl;
}
