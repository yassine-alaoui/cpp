/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:57:06 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/08 15:02:56 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include "ZombieEvent.hpp"

# define MAX 26

void ZombieEvent::setZombieType(string type)
{
	ZombieType = type;
	return ;
}

string ZombieEvent::getZombieType()
{
	return (ZombieType);
}

string RandomString(int n)
{
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n', 
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
  
    string res = "";
    for (int i = 0; i < n; i++) 
        res = res + alphabet[rand() % MAX];
    return res;
}

Zombie	*randomChump()
{
	ZombieEvent newZombie;
    string		randomName;

    randomName = RandomString(10);
	newZombie.setZombieType("large ones");
	return (newZombie.newZombie(randomName));
}
