/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:38:25 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:20:09 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

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

#endif