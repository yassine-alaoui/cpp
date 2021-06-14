/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:27:50 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/12 16:12:57 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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
	{
		std::cout << "--------------" << std::endl;
		NinjaTrap minion("ahmed 2");
		ScavTrap minion1("ahmed 1");
		FragTrap minion2("ahmed 0");

		minion.takeDamage(100);
		minion.beRepaired(500);
		minion.rangedAttack("khoh");
		minion.meleeAttack("khoh");
		minion.ninjaShoebox(minion);
		minion.ninjaShoebox(minion1);
		minion.ninjaShoebox(minion2);
	}
}