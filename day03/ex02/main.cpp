/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:27:50 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/12 15:21:19 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		FragTrap minion("ahmed");
		FragTrap minion1(minion);

		minion1.takeDamage(100);
		minion.vaulthunter_dot_exe("khoh");
		minion.takeDamage(100);
		minion.beRepaired(500);
		minion.vaulthunter_dot_exe("khoh");
		minion.vaulthunter_dot_exe("khoh");
		minion.vaulthunter_dot_exe("khoh");
	}
	{
		std::cout << "--------------" << std::endl;
		ScavTrap minion("ahmed");

		minion.takeDamage(100);
		minion.beRepaired(500);
		minion.rangedAttack("khoh");
		minion.meleeAttack("khoh");
		minion.challengeNewcomer();
	}
}