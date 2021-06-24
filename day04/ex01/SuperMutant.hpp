/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:00:35 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 10:40:40 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const& val);
		SuperMutant(int hp, std::string const & type);
		SuperMutant & operator=(SuperMutant const& val);
		void takeDamage(int val);
		virtual ~SuperMutant();
};

#endif