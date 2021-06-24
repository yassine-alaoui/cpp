/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Btata.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:00:21 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 10:37:08 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTATA_HPP
# define BTATA_HPP

# include <iostream>

# include "AWeapon.hpp"

class Btata : public AWeapon
{
	public:
		Btata();
		Btata(Btata const& val);
		Btata & operator=(Btata const& val);
		int getAPCost() const;
		int getDamage() const;
		std::string getName() const;
		virtual void attack() const;
		virtual ~Btata();
};

#endif