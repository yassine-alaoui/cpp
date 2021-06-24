/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BoxingBag.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:36:06 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/24 10:20:58 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOXINGBAG_HPP
# define BOXINGBAG_HPP

# include <iostream>
# include "Victim.hpp"

class BoxingBag : public Victim
{
	private:
		std::string	_name;
		BoxingBag(void);
	public:
		BoxingBag(BoxingBag const& val);
		BoxingBag &operator=(BoxingBag const& val);
		BoxingBag(std::string name);
		std::string	getName(void) const;
		void	getPolymorphed(void) const;
		virtual ~BoxingBag(void);
};

std::ostream	&operator << (std::ostream &output, BoxingBag const& val);

#endif