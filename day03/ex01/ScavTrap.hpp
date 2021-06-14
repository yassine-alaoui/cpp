/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:25:08 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/13 16:17:54 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

class ScavTrap
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
	public:
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const& val);
		ScavTrap & operator=(ScavTrap const& val);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(void);
		~ScavTrap();
};

#endif