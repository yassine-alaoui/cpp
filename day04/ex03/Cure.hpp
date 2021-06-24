/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:31:26 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:19:24 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

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

#endif