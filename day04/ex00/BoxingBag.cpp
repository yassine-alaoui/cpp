/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BoxingBag.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:36:19 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/14 11:40:56 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BoxingBag.hpp"

BoxingBag::BoxingBag(BoxingBag const& val) : Victim(val._name)
{
	*this = val;
	std::cout << "khchch khchch" << std::endl;
	return ;
}

BoxingBag &BoxingBag::operator=(BoxingBag const& val)
{
	_name = val.getName();
	std::cout << "khchch khchch" << std::endl;
	return *this;
}

BoxingBag::BoxingBag(std::string name) : Victim(name), _name(name)
{
	std::cout << "khchch khchch" << std::endl;
	return ;
}

void	BoxingBag::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a kind friend!" << std::endl;
	return ;
}

std::ostream	&operator << (std::ostream &output, BoxingBag const& val)
{
	output << "I'm " << val.getName() << " bag and I like rice!" << std::endl;
	return output;
}

std::string	BoxingBag::getName(void) const
{
	return _name;
}

BoxingBag::~BoxingBag(void)
{
	std::cout << "Pcheeckhh..." << std::endl;
	return ;
}
