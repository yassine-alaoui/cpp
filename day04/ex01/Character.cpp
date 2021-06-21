/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:28:30 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 12:23:10 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(Character const& val)
{
	*this = val;
	return ;
}

Character::Character(std::string const& name)
{
	this->_name = name;
	this->_ap = 40;
	this->val = NULL;
	return ;
}

Character & Character::operator=(Character const& val)
{
	this->_ap = 40;
	this->_name = val.getName();
	return *this;
}

std::string Character::getName() const
{
	return _name;
}

int Character::getAp() const
{
	return _ap;
}

void Character::equip(AWeapon *val)
{
	this->val = val;
	return ;
}

void Character::attack(Enemy *val)
{
	if (!this->val)
	{
		std::cout << this->_name << " has " << this->_ap
			<< " AP and is unarmed" << std::endl;
	}
	this->_ap = this->_ap <= this->val->getAPCost() ? 0 :
		this->_ap - this->val->getAPCost();
	if (this->_ap == 0)
	{
		std::cout << "No mana left please recover" << std::endl;
		return ;
	}
	val->takeDamage(this->val->getDamage());
	std::cout << _name << " attacks " << val->getType() << " with a "
		<< this->val->getName() << std::endl;
	this->val->attack();
	if (val->getHP() == 0)
		delete val;
}

std::ostream & operator << (std::ostream &output, Character const& val)
{
	if (val.val)
		output << val.getName() << " has " << val.getAp() << " AP and wields a "
			<< val.val->getName() << std::endl;
	else
		output << val.getName() << " has " << val.getAp() << " AP and is unarmed" << std::endl;
	return output;
}

void Character::recoverAP()
{
	this->_ap = this->_ap + 10 > 40 ? 40 : this->_ap + 10;
	return ;
}
