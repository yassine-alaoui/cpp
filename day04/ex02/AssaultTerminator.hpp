/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:07:38 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/19 17:07:42 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:
	public:
		AssaultTerminator(/* args */);
		AssaultTerminator(AssaultTerminator const& val);
		AssaultTerminator & operator=(AssaultTerminator const& val);
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		~AssaultTerminator();
};

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

#endif