/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:31:26 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/20 12:55:33 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	public:
		Cure(/* args */);
		Cure(Cure const& val);
		Cure & operator=(Cure const& val);
		AMateria* clone() const;
		~Cure();
};

Cure::Cure(/* args */) : AMateria("cure")
{
}

Cure::Cure(Cure const& val) : AMateria(val._type)
{
	*this = val;
}

Cure & Cure::operator=(Cure const& val)
{	
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

Cure::~Cure()
{
}


#endif