/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 11:20:49 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/20 13:22:59 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Amateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria *materias[4];
	public:
		Character(/* args */);
		Character(Character const& val);
		Character & operator=(Character const& val);
		~Character();
};

Character::Character(/* args */)
{
	*materias = NULL;
}

Character::Character(Character const& val)
{
	*materias = NULL;
}

Character::Character(Character const& val)
{
	*materias = NULL;
}

Character::~Character()
{
}


#endif