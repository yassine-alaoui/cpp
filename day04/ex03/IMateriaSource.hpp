/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:45:12 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/21 17:10:00 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria * val) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif