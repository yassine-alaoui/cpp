/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:57:02 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/08 15:03:08 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

Zombie	*randomChump();

class ZombieEvent
{
	private:
		string ZombieType;
	public:
		// Setter
		void setZombieType(string type);
	
		// Getter-
		string getZombieType();

		Zombie *newZombie(string name)
		{
			Zombie		*newZombie = new Zombie;

			newZombie->set_name(name);
			newZombie->set_type(ZombieType);
			newZombie->announce(*newZombie);
			return (newZombie);
		}
};

#endif