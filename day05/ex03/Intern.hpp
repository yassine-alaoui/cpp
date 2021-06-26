/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:20:15 by yaalaoui          #+#    #+#             */
/*   Updated: 2021/06/26 19:58:11 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iterator>
# include <iostream>
# include <algorithm>
# include <ctype.h>
class Intern;
# include "Form.hpp"

class Intern
{
	private:
		std::string forms[4];
		Form 		*toForms[4];
	public:
		Intern();
		Intern(Intern const & val);
		Intern & operator=(Intern const & val);
		Form * makeForm(std::string form, std::string target);
		~Intern();
};

#endif