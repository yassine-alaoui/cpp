/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chef.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:00:31 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 10:38:08 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHEF_HPP
# define CHEF_HPP

# include <iostream>

# include "Enemy.hpp"

class Chef : public Enemy
{
	private:
	public:
		Chef(void);
		Chef(Chef const& val);
		Chef(int hp, std::string const & type);
		Chef & operator=(Chef const& val);
		void takeDamage(int val);
		virtual ~Chef();
};

#endif