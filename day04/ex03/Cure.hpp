/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:31:26 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/21 16:54:24 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	public:
		Cure(/* args */);
		Cure(Cure const& val);
		Cure & operator=(Cure const& val);
		AMateria* clone() const;
		void use(ICharacter& target);
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
	(void)val;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *\n";
}

Cure::~Cure()
{
}


#endif