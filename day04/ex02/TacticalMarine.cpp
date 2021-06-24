/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:32:30 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:32:51 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TacticalMarine.hpp"

TacticalMarine & TacticalMarine::operator=(TacticalMarine const& val)
{
	(void)val;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return *this;
}

TacticalMarine::TacticalMarine(TacticalMarine const& val)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = val;
}

TacticalMarine::TacticalMarine(/* args */)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}
