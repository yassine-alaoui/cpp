/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:27:50 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/12 11:29:52 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap minion("ahmed");

	minion.vaulthunter_dot_exe("khoh");
	minion.takeDamage(100);
	minion.beRepaired(500);
	minion.vaulthunter_dot_exe("khoh");
	minion.vaulthunter_dot_exe("khoh");
}