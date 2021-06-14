/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:25:16 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 09:04:43 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const& val);
		NinjaTrap & operator=(NinjaTrap const& val);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	ninjaShoebox(ScavTrap const& val);
		void	ninjaShoebox(FragTrap const& val);
		void	ninjaShoebox(NinjaTrap const& val);
		void	ninjaShoebox(ClapTrap const& val);
		~NinjaTrap();
};

#endif