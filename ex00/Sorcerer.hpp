/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:36:59 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 11:47:55 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string	_name;
		std::string	_title;
		Sorcerer(void);
	public:
		Sorcerer(Sorcerer const& val);
		Sorcerer &operator=(Sorcerer const& val);
		Sorcerer(std::string name, std::string title);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void polymorph(Victim const &val) const;
		~Sorcerer(void);
};

std::ostream	&operator << (std::ostream &output, Sorcerer const& val);

#endif