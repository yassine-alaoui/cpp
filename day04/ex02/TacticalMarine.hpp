/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:48:54 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/22 13:32:29 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TATCTICALMARINE_HPP
# define TATCTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:
	public:
		TacticalMarine(/* args */);
		TacticalMarine(TacticalMarine const& val);
		TacticalMarine & operator=(TacticalMarine const& val);
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		~TacticalMarine();
};

#endif