/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:21:00 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/11 10:17:24 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	fixedPointVal;
		int	static const literal;
	public:
		Fixed(void);
		Fixed(Fixed const& src);
		Fixed & operator=(Fixed const& val);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif