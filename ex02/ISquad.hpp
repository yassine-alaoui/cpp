/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:20:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/18 10:51:59 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		ISquad() {};
		ISquad(ISquad const& val) {*this = val;};
		ISquad & operator=(ISquad const& val) {(void)val;return *this;};
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int num) const = 0;
		virtual int push(ISpaceMarine* val) = 0;
};

#endif