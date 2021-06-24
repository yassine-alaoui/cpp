/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chef.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:29:53 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 10:28:22 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Chef.hpp"

Chef::Chef(void)
{
	this->_hp = 80;
	this->_type = "Chef";
	std::cout << "* click click click *" << std::endl;
	return ;
}

Chef::Chef(Chef const& val)
{
	*this = val;
	std::cout << "* click click click *" << std::endl;
	return ;
}

Chef & Chef::operator=(Chef const& val)
{
	std::cout << "* click click click *" << std::endl;
	this->_hp = val.getHP();
	this->_type = val.getType();
	return *this;
}

void	Chef::takeDamage(int val)
{
	Enemy::takeDamage(val);
}

Chef::~Chef()
{
	std::cout << "* SPROTCH *" << std::endl;
}
