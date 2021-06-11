/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:21:00 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/11 12:02:21 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	fixedPointVal;
		int	static const literal;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const& src);
		Fixed & operator=(Fixed const& val);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

std::ostream & operator << (std::ostream &output, const Fixed &D);

#endif