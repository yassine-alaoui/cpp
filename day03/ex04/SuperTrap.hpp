/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:31:48 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/12 18:11:56 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		int			hp;
		int			mhp;
		int			mp;
		int			mmp;
		int			lvl;
		std::string	name;
		int			mad;
		int			rad;
		int			adr;
		SuperTrap(void);
	public:
		SuperTrap(std::string const name);
		SuperTrap(SuperTrap const& val);
		SuperTrap & operator=(SuperTrap const& val);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		~SuperTrap();
};

#endif