/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:49:50 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 11:39:50 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*_materias[4];
		unsigned int	_count;
		std::string		_type;
	public:
		MateriaSource(/* args */);
		MateriaSource(MateriaSource const& val);
		MateriaSource & operator=(MateriaSource const& val);
		void learnMateria(AMateria * val);
		AMateria* createMateria(std::string const & type);
		virtual ~MateriaSource();
};

#endif