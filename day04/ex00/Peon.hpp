/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:36:06 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 10:20:58 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	private:
		std::string	_name;
		Peon(void);
	public:
		Peon(Peon const& val);
		Peon &operator=(Peon const& val);
		Peon(std::string name);
		std::string	getName(void) const;
		void	getPolymorphed(void) const;
		virtual ~Peon(void);
};

std::ostream	&operator << (std::ostream &output, Peon const& val);

#endif