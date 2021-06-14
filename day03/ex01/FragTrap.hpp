/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:27:55 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/13 16:17:49 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

class FragTrap
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
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const& val);
		FragTrap & operator=(FragTrap const& val);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
		~FragTrap();
};

#endif