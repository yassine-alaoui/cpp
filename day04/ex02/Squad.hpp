/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:20:44 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:27:31 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Container
{
	public:
		ISpaceMarine	*marine;
		Container		*next;
};

class Squad : public ISquad
{
	private:
		int				count;
		Container		*contain;
	public:
		Squad();
		Squad(Squad const& val);
		Squad & operator=(Squad const& val);
		int getCount() const;
		ISpaceMarine* getUnit(int num) const;
		int push(ISpaceMarine* val);
		~Squad();
};

#endif