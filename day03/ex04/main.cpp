/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:27:50 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 09:14:15 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
		NinjaTrap minion("ahmed 0");
		ScavTrap minion1("ahmed 1");
		FragTrap minion2("ahmed 2");

		minion.takeDamage(100);
		minion.beRepaired(500);
		minion.rangedAttack("khoh");
		minion.meleeAttack("khoh");
		minion.ninjaShoebox(minion);
		minion.ninjaShoebox(minion1);
		minion.ninjaShoebox(minion2);
	}
	{
		std::cout << "--------------" << std::endl;
		SuperTrap minion("ahmed");
		NinjaTrap minion1("mohamed");

		minion.rangedAttack("khoh");
		minion.meleeAttack("khoh");
		minion.ninjaShoebox(minion1);
		minion.vaulthunter_dot_exe("khto");
	}
}