/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:04:38 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/11 12:13:11 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::literal = 8;

Fixed::Fixed(void) : fixedPointVal(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int value)
{
	this->fixedPointVal = value * (1 << Fixed::literal);
	std::cout << "Default parametre int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float value)
{
	this->fixedPointVal = roundf(value * (1 << Fixed::literal));
	std::cout << "Default parametre float constructor called" << std::endl;
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

float Fixed::toFloat( void ) const
{
	return (float)this->fixedPointVal / (1 << Fixed::literal);
}

int Fixed::toInt( void ) const
{
	return this->fixedPointVal / (1 << Fixed::literal);
}

int Fixed::getRawBits( void ) const
{
	return this->fixedPointVal;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;

	this->fixedPointVal = raw;
	return ;
}

std::ostream & operator << (std::ostream &output, Fixed const &D)
{
	output << D.toFloat();
	return output;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}