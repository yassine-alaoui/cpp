/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:29:11 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/06 21:13:05 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# define cout std::cout
# define cin std::cin
# define endl std::endl
# define string std::string

void	CreateZombie();

class Zombie
{
	private:
		string name;
		string type;
	public:
		void	announce(Zombie newZombie);
		// Setters
		void	set_name(string value);
		void	set_type(string value);

		// Getters
		string	get_name();
		string	get_type();

};

void	randomChump(Zombie *NewZombie);

#endif