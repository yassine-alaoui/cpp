/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:00:03 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 10:30:13 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARCTER_HPP
# define CHARCTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int			_ap;
		Character();
	public:
		AWeapon 	*val;
		Character(Character const& val);
		Character(std::string const& name);
		Character & operator=(Character const& val);
		~Character();
		void recoverAP();
		void equip(AWeapon *val);
		void attack(Enemy *val);
		std::string getName() const;
		int getAp() const;
};

std::ostream & operator << (std::ostream &output, Character const& val);

#endif