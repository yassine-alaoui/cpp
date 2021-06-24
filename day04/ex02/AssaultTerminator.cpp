/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:22:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:23:09 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AssaultTerminator.hpp"

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const& val)
{
	(void)val;
	std::cout << "* teleports from space *" << std::endl;
	return *this;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& val)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = val;
}

AssaultTerminator::AssaultTerminator(/* args */)
{
	std::cout << "* teleports from space *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}
