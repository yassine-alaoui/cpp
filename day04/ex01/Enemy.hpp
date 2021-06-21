/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:00:10 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 13:00:12 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	protected:
		int			_hp;
		std::string	_type;
		Enemy(void) {};
	public:
		Enemy(Enemy const& val);
		Enemy(int hp, std::string const & type);
		Enemy & operator=(Enemy const& val);
		virtual ~Enemy() {};
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int val);
};

#endif