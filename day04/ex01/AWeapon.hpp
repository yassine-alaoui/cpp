/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:59:58 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 13:00:00 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	protected:
		std::string _name;
		int			_ad;
		int			_ap;
		AWeapon() {};
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const& val);
		AWeapon & operator=(AWeapon const& val);
		virtual ~AWeapon() {};
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif