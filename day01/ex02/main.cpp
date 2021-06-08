/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:13:04 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/08 16:24:36 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	Zombie *tmpZombie;
	tmpZombie = randomChump();
	delete tmpZombie;
	tmpZombie = randomChump();
	delete tmpZombie;
}