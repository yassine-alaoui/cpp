/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:02:28 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 11:08:17 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"
# include "Peon.hpp"
# include "BoxingBag.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	BoxingBag btata("Btata");
	std::cout << robert << jim << joe << btata;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(btata);
	return 0;
}