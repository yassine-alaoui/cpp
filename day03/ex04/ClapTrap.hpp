/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:30:13 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 08:55:14 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

class ClapTrap
{
	protected:
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
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const& val);
		ClapTrap & operator=(ClapTrap const& val);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif