/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:04:38 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/11 10:17:42 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::literal = 8;

Fixed::Fixed(void) : fixedPointVal(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const& src) : fixedPointVal(0)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
	return ;
}

Fixed & Fixed::operator=(Fixed const& val)
{
	std::cout << "Assignment operator called" << std::endl;

	this->fixedPointVal = val.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->fixedPointVal;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;

	this->fixedPointVal = raw;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}