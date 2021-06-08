/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:57:06 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/06 21:13:58 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include "ZombieHorde.hpp"

const int MAX = 26;

ZombieHorde::ZombieHorde(int N)
{
	int i;

	i = 0;
	number = N;
	newZombie = new Zombie[N];
	while (i < N)
	{
		randomChump(&newZombie[i]);
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] newZombie;
}

void	ZombieHorde::announce()
{
	int			i = 0;
	Zombie		*tmp;

	tmp = newZombie;
	while (i < number)
	{
		tmp->announce(*tmp);
		tmp++;
		i++;
	}
}

string Randomstring(int n)
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

void	randomChump(Zombie *newZombie)
{
    string  randomName;

    randomName = Randomstring(10);
	newZombie->set_name(randomName);
	newZombie->set_type("followers");
}
