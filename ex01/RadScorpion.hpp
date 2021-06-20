/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:00:31 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/15 13:00:32 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const& val);
		RadScorpion(int hp, std::string const & type);
		RadScorpion & operator=(RadScorpion const& val);
		void takeDamage(int val);
		~RadScorpion();
};

#endif