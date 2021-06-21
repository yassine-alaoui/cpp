/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:37:45 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 11:47:29 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	private:
		std::string	_name;
		Victim(void);
	public:
		Victim(Victim const& val);
		Victim &operator=(Victim const& val);
		Victim(std::string name);
		std::string	getName(void) const;
		virtual void	getPolymorphed(void) const;
		~Victim(void);
};

std::ostream	&operator << (std::ostream &output, Victim const& val);

#endif