/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:27:17 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 11:27:36 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Enemy.hpp"

Enemy::Enemy(Enemy const& val)
{
	*this = val;
	return ;
}

Enemy & Enemy::operator=(Enemy const& val)
{
	this->_hp = val.getHP();
	this->_type = val.getType();
	return *this;
}

void	Enemy::takeDamage(int val)
{
	if (val <= 0)
		return ;
	_hp = _hp < val ? 0 : _hp - val;
}

std::string Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hp;
}
