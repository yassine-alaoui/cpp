/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:38:25 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/21 16:53:51 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
	public:
		Ice(/* args */);
		Ice(Ice const& val);
		Ice & operator=(Ice const& val);
		AMateria* clone() const;
		void use(ICharacter& target);
		~Ice();
};

Ice::Ice(/* args */) : AMateria("ice")
{
}

Ice::Ice(Ice const& val) : AMateria(val._type)
{
	*this = val;
}

Ice & Ice::operator=(Ice const& val)
{
	(void)val;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{
}


#endif