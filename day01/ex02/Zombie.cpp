/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:29:11 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/04 09:13:12 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	Zombie::announce(Zombie newZombie)
{
	cout << newZombie.get_name() << " " << newZombie.get_type() << endl;
	return ;
}

void	Zombie::set_name(string value)
{
	name = value;
	return ;
}

void	Zombie::set_type(string value)
{
	type = value;
	return ;
}

string	Zombie::get_name()
{
	return (name);
}

string	Zombie::get_type()
{
	return (type);
}
